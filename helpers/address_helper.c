//
// Created by Michal Ziobro on 24/07/2016.
//


#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <string.h>
#include <errno.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <ifaddrs.h>
#include "address_helper.h"

result_t print_socket_address(int sockfd, socket_type_t socket_type) {

    char *ip_address; // address (passive) socket was binded to
    int port; // port (passive) socket was binded to

    switch(socket_type)
    {
        case PASSIVE_SOCKET:
            if(get_current_address_and_port(sockfd, &ip_address, &port) == FAILURE) {
                fprintf(stderr, "get_current_address_and_port: faild!\n");
                free(ip_address);
                return FAILURE;
            }
            printf("Created passive socket %d binded to %s:%d\n", sockfd, ip_address, port);
            break;
        case CONNECTION_SOCKET:
            if(get_peer_address_and_port(sockfd, &ip_address, &port) == FAILURE) {
                fprintf(stderr, "get_peer_address_and_port: faild!\n");
                free(ip_address);
                return FAILURE;
            }
            printf("Socket %d connected to %s:%d\n", sockfd, ip_address, port);
            break;
        default:
            fprintf(stderr, "Incorrect socket type!\n");
            free(ip_address);
            return FAILURE;
    }

    free(ip_address);
    return SUCCESS;
}

/**
 * function retrieves current ip address and port
 * socket is bound to for given socket file descriptor
 */
result_t get_current_address_and_port(int sockfd, char **ip_address, int *port) {

    struct sockaddr_storage sockaddr = {0};
    socklen_t sockaddrlen = sizeof(sockaddr);

    if(getsockname(sockfd, (struct sockaddr*) (&sockaddr), &sockaddrlen) < 0) {
        fprintf(stderr, "getsockname: %s\n", strerror(errno));
        return FAILURE;
    }

    return get_address_and_port_from_sockaddr((struct sockaddr*) (&sockaddr), ip_address, port);
}

/**
 * function retrieves peer ip address and port
 * socket is connected to for given socket file descriptor
 */
result_t get_peer_address_and_port(int sockfd, char **ip_address, int *port) {

    struct sockaddr_storage sockaddr = {0};
    socklen_t sockaddrlen = sizeof(sockaddr);

    if(getpeername(sockfd, (struct sockaddr*) (&sockaddr), &sockaddrlen) < 0) {
        fprintf(stderr, "getpeername: %s\n", strerror(errno));
        return FAILURE;
    }

    return get_address_and_port_from_sockaddr( (struct sockaddr*)&sockaddr, ip_address, port);
}

/**
 * function unwrap ip address and port from addrinfo structure
 */
result_t get_address_and_port_from_addrinfo(const struct addrinfo *addrinfo, char **ip_address, int *port) {

    return get_address_and_port_from_sockaddr((struct sockaddr *)addrinfo->ai_addr, ip_address, port);
}

/**
 * function unwrap ip address and port from sockaddr structure
 */
result_t get_address_and_port_from_sockaddr(const struct sockaddr *sockaddr, char **ip_address, int *port) {

    *ip_address = (char *) malloc(INET6_ADDRSTRLEN * sizeof(char));

    // converting network address to presentation address
    if(inet_ntop(sockaddr->sa_family, get_in_addr(sockaddr), *ip_address, INET6_ADDRSTRLEN * sizeof(char)) == NULL) {
        fprintf(stderr, "inet_ntop: %s\n", strerror(errno));
        return FAILURE;
    }

    // converting network port to host port
    *port = ntohs(get_in_port(sockaddr));

    return SUCCESS;
}

/**
 * function unwrap in_addr or in6_addr structure from
 * sockaddr structure depending on address family
 * AF_INET or AF_INET6
 */
void *get_in_addr(const struct sockaddr *sa) {

    if( sa->sa_family == AF_INET) // IPv4 address
        return &(((struct sockaddr_in*)sa)->sin_addr);
    // else IPv6 address
    return &(((struct sockaddr_in6*)sa)->sin6_addr);
}

/**
 * function unwrap in_port from sockaddr structure
 * depending on address family AF_INET or AF_INET6
 */
in_port_t get_in_port(const struct sockaddr *sa)
{
    if( sa->sa_family == AF_INET ) // IPv4 address
        return (((struct sockaddr_in*)sa)->sin_port);
    // else IPv6 address
    return (((struct sockaddr_in6*)sa)->sin6_port);
}

/**
 * function returns current device interfaces and ip addresses
 */
result_t print_current_interfaces_and_address(void) {

    // linked list of structures describing
    // the network interfaces of the local system
    struct ifaddrs *ifaddr, *ifa;
    int n, gai_err;

    if(getifaddrs(&ifaddr) == FAILURE) {
        fprintf(stderr, "getifaddrs: %s\n", strerror(errno));
        return FAILURE;
    }

    // walk through linked list
    for(ifa = ifaddr, n=0; ifa != NULL; ifa = ifa->ifa_next, n++) {

        if(ifa->ifa_addr == NULL)
            continue;

        int family = ifa->ifa_addr->sa_family;

        // display interface name, family
        printf("%-8s %s (%d)\n", ifa->ifa_name,
               (family == AF_INET) ? "AF_INET" :
               (family == AF_INET6) ? "AF_INET6" : "???",
               family);

        // for an AF_INET* interface addresses, display the address
        if(family == AF_INET || family == AF_INET6) {

            char host[NI_MAXHOST];

            if( (gai_err = getnameinfo(ifa->ifa_addr,
                        (family == AF_INET) ? sizeof(struct sockaddr_in) :
                                              sizeof(struct sockaddr_in6),
                        host, NI_MAXHOST,
                        NULL, 0, NI_NUMERICHOST)) != 0) {
                fprintf(stderr, "getnameinfo: %s\n", gai_strerror(gai_err));
            }

            printf("\t\t address: <%s>\n", host);
        }
    }

    freeifaddrs(ifaddr);

    return SUCCESS;
}

result_t get_current_address(const sa_family_t family, char **ip_address) {

    // linked list of structures describing
    // the network interfaces of the local system
    struct ifaddrs *ifaddr, *ifa;
    int n, gai_err;

    if(getifaddrs(&ifaddr) == FAILURE) {
        fprintf(stderr, "getifaddrs: %s\n", strerror(errno));
        return FAILURE;
    }

    // walk through linked list
    for(ifa = ifaddr, n=0; ifa != NULL; ifa = ifa->ifa_next, n++) {

        if(ifa->ifa_addr == NULL)
            continue;

        if(strcmp(ifa->ifa_name,"en0") != 0  && strcmp(ifa->ifa_name,"eth0") != 0)
            continue;

        if(ifa->ifa_addr->sa_family != family)
            continue;


        *ip_address = malloc(NI_MAXHOST*sizeof(char));
        if( (gai_err = getnameinfo(ifa->ifa_addr,
                                       (family == AF_INET) ? sizeof(struct sockaddr_in) : sizeof(struct sockaddr_in6),
                                       *ip_address, NI_MAXHOST, NULL, 0, NI_NUMERICHOST)) != 0) {
            fprintf(stderr, "getnameinfo: %s\n", gai_strerror(gai_err));
            continue;
        }

        break;
    }

    if(ifa == NULL) {
        fprintf(stderr, "couldn't find ip address of current device");
    }

    freeifaddrs(ifaddr);

    return SUCCESS;

}
//
// Created by Michal Ziobro on 14/10/2016.
//

#include <sys/socket.h>
#include <stdio.h>
#include <errno.h>
#include "integer_transfer.h"

result_t send_uint64(const sock_fd_t sock_fd, const uint64_t uint64) {

    // convert uint64 from host to network representation
    uint64_t network_uint64 = htonll(uint64);

    ssize_t res = send(sock_fd, &network_uint64, sizeof(uint64_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while sending uint64 number to socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(uint64_t)) {
        fprintf(stderr, "%s: Error not all bytes of uint64 number sent correctly to socket.\n", __func__);
        return FAILURE;
    }

    return SUCCESS;
}

result_t recv_uint64(const sock_fd_t sock_fd, uint64_t *uint64) {

    uint64_t network_uint64 = 0;

    ssize_t res = recv(sock_fd, &network_uint64, sizeof(uint64_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while receiving uint64 number from socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(uint64_t)) {
        fprintf(stderr, "%s: Error not all bytes of uint64 number received from socket.\n", __func__);
        return FAILURE;
    }

    // convert uint64 from network to host representation
    *uint64 = ntohll(network_uint64);
    return SUCCESS;
}

result_t send_uint32(const sock_fd_t sock_fd, const uint32_t uint32) {

    // convert uint32 from host to network representation
    uint32_t network_uint32 = htonl(uint32);

    ssize_t res = send(sock_fd, &network_uint32, sizeof(uint32_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while sending uint32 number to socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(uint32_t)) {
        fprintf(stderr, "%s: Error not all bytes of uint32 number sent correctly to socket.\n", __func__);
        return FAILURE;
    }

    return SUCCESS;
}

result_t recv_uint32(const sock_fd_t sock_fd, uint32_t *uint32) {

    uint32_t network_uint32 = 0;

    ssize_t res = recv(sock_fd, &network_uint32, sizeof(uint32_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while receiving uint32 number from socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(uint32_t)) {
        fprintf(stderr, "%s: Error not all bytes of uint32 number received form socket.\n", __func__);
        return FAILURE;
    }

    // convert uint32 from network to host representation
    *uint32 = ntohl(network_uint32);
    return SUCCESS;
}

result_t send_uint16(const sock_fd_t sock_fd, const uint16_t uint16) {

    // convert uint16 from host to network representation
    uint16_t network_uint16 = htons(uint16);

    ssize_t res = send(sock_fd, &network_uint16, sizeof(uint16_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while sending uint16 number to socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(uint16_t)) {
        fprintf(stderr, "%s: Error not all bytes of uint16 number sent correctly to socket.\n", __func__);
        return FAILURE;
    }

    return SUCCESS;
}

result_t recv_uint16(const sock_fd_t sock_fd, uint16_t *uint16) {

    uint16_t network_uint16 = 0;

    ssize_t res = recv(sock_fd, &network_uint16, sizeof(uint16_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while receiving uint16 number from socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(uint16_t)) {
        fprintf(stderr, "%s: Error not all bytes of uint16 number received from socket.\n", __func__);
        return FAILURE;
    }

    // convert uint16 from network to host representation
    *uint16 = ntohs(network_uint16);
    return SUCCESS;
}

result_t send_uint8(const sock_fd_t sock_fd, const uint8_t uint8) {

    ssize_t res = send(sock_fd, &uint8, sizeof(uint8_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while sending uint8 number to socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(uint8_t)) {
        fprintf(stderr, "%s: Error not all bytes of uint8 number sent correctly to socket.\n", __func__);
        return FAILURE;
    }

    return SUCCESS;
}

result_t recv_uint8(const sock_fd_t sock_fd, uint8_t *uint8) {

    ssize_t res = recv(sock_fd, uint8, sizeof(uint8_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while receiving uint8 number from socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(uint8_t)) {
        fprintf(stderr, "%s: Error not all bytes of uint8 number received from socket.\n", __func__);
        return FAILURE;
    }

    return SUCCESS;
}
//
// Created by Michal Ziobro on 14/10/2016.
//

#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include "transfer/integer_transfer.h"

// Windows Cygwin doesn't define htonll()/ntohll() functions so we need to provide ones
#ifdef __CYGWIN__
    #include "common/endianness.h"
    uint64_t (*htonll)(uint64_t) = _htonll;
    uint64_t (*ntohll)(uint64_t) = _ntohll;
#endif
// Android doesn't define htonll()/ntohll() functions so we need to provide ones
#ifdef __ANDROID__
    #include "common/endianness.h"
    uint64_t (*htonll)(uint64_t) = _htonll;
    uint64_t (*ntohll)(uint64_t) = _ntohll;
#endif

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

result_t send_int64(const sock_fd_t sock_fd, const int64_t int64) {

    // convert int64 from host to network representation
    int64_t network_int64 = htonll(int64);

    ssize_t res = send(sock_fd, &network_int64, sizeof(int64_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while sending int64 number to socket\n", __func__);
        return FAILURE;
    } else if(res < sizeof(int64_t)) {
        fprintf(stderr, "%s: Error not all bytes of int64 number sent correctly to socket.\n", __func__);
        return FAILURE;
    }

    return SUCCESS;
}

result_t recv_int64(const sock_fd_t sock_fd, int64_t *int64) {

    int64_t network_int64 = 0;

    ssize_t res = recv(sock_fd, &network_int64, sizeof(int64_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while receiving int64 number from socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(int64_t)) {
        fprintf(stderr, "%s: Error not all bytes of int64 number received from socket.\n", __func__);
        return FAILURE;
    }

    // convert int64 from network to host representation
    *int64 = ntohll(network_int64);
    return SUCCESS;
}

result_t send_int32(const sock_fd_t sock_fd, const int32_t int32) {

    // convert int32 from host to network representation
    int32_t network_int32 = htonl(int32);

    ssize_t res = send(sock_fd, &network_int32, sizeof(int32_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while sending int32 number to socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(int32_t)) {
        fprintf(stderr, "%s: Error not all bytes of int32 number sent correctly to socket.\n", __func__);
        return FAILURE;
    }

    return SUCCESS;
}

result_t recv_int32(const sock_fd_t sock_fd, int32_t *int32) {

    int32_t network_int32 = 0;

    ssize_t res = recv(sock_fd, &network_int32, sizeof(int32_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while receiving int32 number from socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(int32_t)) {
        fprintf(stderr, "%s: Error not all bytes of int32 number received form socket.\n", __func__);
        return FAILURE;
    }

    // convert int32 from network to host representation
    *int32 = ntohl(network_int32);
    return SUCCESS;
}

result_t send_int16(const sock_fd_t sock_fd, const int16_t int16) {

    // convert int16 from host to network representation
    int16_t network_int16 = htons(int16);

    ssize_t res = send(sock_fd, &network_int16, sizeof(int16_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while sending int16 number to socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(int16_t)) {
        fprintf(stderr, "%s: Error not all bytes of int16 number sent correctly to socket.\n", __func__);
        return FAILURE;
    }

    return SUCCESS;
}

result_t recv_int16(const sock_fd_t sock_fd, int16_t *int16) {

    int16_t network_int16 = 0;

    ssize_t res = recv(sock_fd, &network_int16, sizeof(int16_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while receiving int16 number from socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(int16_t)) {
        fprintf(stderr, "%s: Error not all bytes of int16 number received from socket.\n", __func__);
        return FAILURE;
    }

    // convert int16 from network to host representation
    *int16 = ntohs(network_int16);
    return SUCCESS;
}

result_t send_int8(const sock_fd_t sock_fd, const int8_t int8) {

    ssize_t res = send(sock_fd, &int8, sizeof(int8_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while sending int8 number to socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(int8_t)) {
        fprintf(stderr, "%s: Error not all bytes of int8 number sent correctly to socket.\n", __func__);
        return FAILURE;
    }

    return SUCCESS;
}

result_t recv_int8(const sock_fd_t sock_fd, int8_t *int8) {

    ssize_t res = recv(sock_fd, int8, sizeof(int8_t), 0);
    if(res < 0) {
        fprintf(stderr, "%s: Error while receiving int8 number from socket.\n", __func__);
        return FAILURE;
    } else if(res < sizeof(int8_t)) {
        fprintf(stderr, "%s: Error not all bytes of int8 number received from socket.\n", __func__);
        return FAILURE;
    }

    return SUCCESS;
}
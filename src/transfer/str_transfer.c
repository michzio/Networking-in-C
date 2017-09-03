//
// Created by Michal Ziobro on 14/10/2016.
//

#include <stdio.h>
#include <stdlib.h>
#include "common/network_types.h"
#include "transfer/integer_transfer.h"
#include "transfer/binary_transfer.h"
#include "../../../common/include/types.h"

result_t send_cstr(const sock_fd_t sock_fd, const char *cstr, const size_t cstrlen) {

    // send c string length
    if(send_uint64(sock_fd, (uint64_t) cstrlen) != SUCCESS) {
        fprintf(stderr, "%s: Error while sending C string length as uint64 number to socket.\n", __func__);
        return FAILURE;
    }

    // send c string as binary data of given length
    if(send_binary(sock_fd, PACKET_LENGTH, (const unsigned char *) cstr, cstrlen + 1) != SUCCESS) {
        fprintf(stderr, "%s: Error while sending C string as binary data to socket.\n", __func__);
        return FAILURE;
    }

    return SUCCESS;
}

result_t recv_cstr(const sock_fd_t sock_fd, char **cstr, size_t *cstrlen) {

    uint64_t uint64;

    // recv c string length
    if(recv_uint64(sock_fd, &uint64) != SUCCESS) {
        fprintf(stderr, "%s: Error while receiving C string length as uint64 number from socket.\n", __func__);
        return FAILURE;
    }

    *cstrlen = (size_t) uint64;

    // recv c string as binary data of given length
    *cstr = (char *) malloc(sizeof(char)*(*cstrlen));

    if(recv_binary(sock_fd, PACKET_LENGTH, (unsigned char *) *cstr, *cstrlen + 1) != SUCCESS) {
        fprintf(stderr, "%s: Error while receiving C string as binary data from socket.\n", __func__);
        return FAILURE;
    }

    return SUCCESS;
}

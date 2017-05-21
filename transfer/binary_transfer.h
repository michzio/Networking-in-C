//
// Created by Michal Ziobro on 14/10/2016.
//

#ifndef NETWORKING_BINARY_TRANSFER_H_H
#define NETWORKING_BINARY_TRANSFER_H_H

#include <stdio.h>
#include "../common/network_types.h"
#include "../../common/types.h"

#define PACKET_LENGTH 4096

result_t send_binary(const sock_fd_t sock_fd, const size_t packetLength, const unsigned char *data, const size_t dataLength);
result_t recv_binary(const sock_fd_t sock_fd, const size_t packetLength, unsigned char *data, const size_t dataLength);

#endif //NETWORKING_BINARY_TRANSFER_H_H

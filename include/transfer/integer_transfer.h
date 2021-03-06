//
// Created by Michal Ziobro on 14/10/2016.
//

#include <stdint.h>
#include "types.h"
#include "common/network_types.h"

#ifndef NETWORKING_INTEGER_TRANSFER_H
#define NETWORKING_INTEGER_TRANSFER_H

result_t send_uint64(const sock_fd_t sock_fd, const uint64_t uint64);
result_t recv_uint64(const sock_fd_t sock_fd, uint64_t *uint64);
result_t send_uint32(const sock_fd_t sock_fd, const uint32_t uint32);
result_t recv_uint32(const sock_fd_t sock_fd, uint32_t *uint32);
result_t send_uint16(const sock_fd_t sock_fd, const uint16_t uint16);
result_t recv_uint16(const sock_fd_t sock_fd, uint16_t *uint16);
result_t send_uint8(const sock_fd_t sock_fd, const uint8_t uint8);
result_t recv_uint8(const sock_fd_t sock_fd, uint8_t *uint8);

result_t send_int64(const sock_fd_t sock_fd, const int64_t int64);
result_t recv_int64(const sock_fd_t sock_fd, int64_t *int64);
result_t send_int32(const sock_fd_t sock_fd, const int32_t int32);
result_t recv_int32(const sock_fd_t sock_fd, int32_t *int32);
result_t send_int16(const sock_fd_t sock_fd, const int16_t int16);
result_t recv_int16(const sock_fd_t sock_fd, int16_t *int16);
result_t send_int8(const sock_fd_t sock_fd, const int8_t int8);
result_t recv_int8(const sock_fd_t sock_fd, int8_t *int8);

#endif //NETWORKING_INTEGER_TRANSFER_H

//
// Created by Michal Ziobro on 14/10/2016.
//

#ifndef NETWORKING_STR_TRANSFER_H
#define NETWORKING_STR_TRANSFER_H

#include "types.h"
#include "common/network_types.h"

result_t send_cstr(const sock_fd_t sock_fd, const char *cstr, const size_t cstrlen);
result_t recv_cstr(const sock_fd_t sock_fd, char **cstr, size_t *cstrlen);

#endif //NETWORKING_STR_TRANSFER_H

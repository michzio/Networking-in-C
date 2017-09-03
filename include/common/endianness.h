//
// Created by Michal Ziobro on 28.11.2016.
//

#ifndef NETWORKING_ENDIANNESS_H
#define NETWORKING_ENDIANNESS_H

#include <stdbool.h>
#include <stdint.h>

bool isBigEndian(void);
bool isLittleEndian(void);
uint64_t swapEndianness(uint64_t num);
uint64_t _htonll(uint64_t host_num64);
uint64_t _ntohll(uint64_t network_num64);

#endif //NETWORKING_ENDIANNESS_H

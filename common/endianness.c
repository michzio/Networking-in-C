//
// Created by Michal Ziobro on 28.11.2016.
//
#include "endianness.h"

bool isBigEndian(void) {
    int n = 1;
    // little endian if true
    if(*(char *)&n == 1) {
        return false;
    }
    return true;
}

bool isLittleEndian() {
    return  !(isBigEndian());
}

uint64_t swapEndianness(uint64_t num) {

    uint64_t b0, b1, b2, b3, b4, b5, b6, b7;
    uint64_t swapped_num;

    b0 = (num & 0x00000000000000ff) << 56u;
    b1 = (num & 0x000000000000ff00) << 40u;
    b2 = (num & 0x0000000000ff0000) << 24u;
    b3 = (num & 0x00000000ff000000) << 8u;
    b4 = (num & 0x000000ff00000000) >> 8u;
    b5 = (num & 0x0000ff0000000000) >> 24u;
    b6 = (num & 0x00ff000000000000) >> 40u;
    b7 = (num & 0xff00000000000000) >> 56u;

    swapped_num = b0 | b1 | b2 | b3 | b4 | b5 | b6 | b7;

    return swapped_num;
}

uint64_t htonll(uint64_t host_num64) {

    if(isLittleEndian()) {
        // swap little endian to big endian (network byte order)
        return swapEndianness(host_num64);
    }
    return host_num64;
}

uint64_t ntohll(uint64_t network_num64) {

    if(isLittleEndian()) {
        // swap big endian (network byte order) to little endian
        return swapEndianness(network_num64);
    }
    return network_num64;
}
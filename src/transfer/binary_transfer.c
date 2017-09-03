//
// Created by Michal Ziobro on 14/10/2016.
//
#include <sys/socket.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include "transfer/binary_transfer.h"

/**
 * @param sock_fd - the file descriptor of the socket to write (send) data to
 * @param packetLength - the size of data to send in one packet
 * @param data - binary data to send (unsigned char array)
 * @param dataLength - the size of all binary data to send
 * @return  - status code SUCCESS or FAILURE
 */
result_t send_binary(const sock_fd_t sock_fd, const size_t packetLength, const unsigned char *data, const size_t dataLength) {

    ssize_t leftPacketLength = 0;
    ssize_t offset = 0;
    ssize_t sentPacketLength = 0;

    // send each packet of data in the loop
    for(int leftDataLength=dataLength; leftDataLength>0; leftDataLength -= packetLength) {

        leftPacketLength = (leftDataLength > packetLength) ? packetLength : leftDataLength;
        while(leftPacketLength > 0) {
            sentPacketLength = send(sock_fd, data + offset, leftPacketLength, 0);
            if(sentPacketLength < 0) {
                fprintf(stderr, "%s: Error while sending data to the socket.\n", __func__);
                return FAILURE;
            }
            offset += sentPacketLength;
            leftPacketLength -= sentPacketLength;
        }
    }
    if(offset != dataLength)
        return FAILURE;

    return SUCCESS;
}

/**
 * @param sock_fd - the file descriptor of the socket to read (recieve) data from
 * @param packetLength - the size of data to recieve in one packet
 * @param data - binary data received (unsigned char array) - previously allocated
 * @param dataLength - the size of all binary data received - previously defined
 * @return - status code SUCCESS or FAILURE
 */
result_t recv_binary(const sock_fd_t sock_fd, const size_t packetLength, unsigned char *data, const size_t dataLength) {

    ssize_t leftPacketLength = 0;
    ssize_t offset = 0;
    ssize_t recvedPacketLength = 0;


    for(int leftDataLength=dataLength; leftDataLength > 0; leftDataLength -= packetLength) {

        leftPacketLength = (leftDataLength > packetLength) ? packetLength : leftDataLength;
        while(leftPacketLength > 0) {
            recvedPacketLength = recv(sock_fd, data + offset, leftPacketLength, 0);
            if(recvedPacketLength < 0) {
                fprintf(stderr, "%s: Error while receiving data from the socket.\n", __func__);
                return FAILURE;
            }
            offset += recvedPacketLength;
            leftPacketLength -= recvedPacketLength;
        }
    }
    if(offset != dataLength)
        return FAILURE;

    return SUCCESS;
}
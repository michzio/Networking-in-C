//
// Created by Michal Ziobro on 28.11.2016.
//

#ifndef NETWORKING_TEST_ENDIANNESS_H
#define NETWORKING_TEST_ENDIANNESS_H

typedef struct {
    void (*run_tests)(void);
} test_endianness_t;

extern test_endianness_t test_endianness;

#endif //NETWORKING_TEST_ENDIANNESS_H

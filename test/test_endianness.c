//
// Created by Michal Ziobro on 28.11.2016.
//

#include <stdio.h>
#include <inttypes.h>
#include "test_endianness.h"
#include "common/endianness.h"
#include "common/terminal.h"
#include "test/assertion.h"

static void test_swap_endianness(void) {

    TEST_FUNCTION_HEADER;

    uint64_t number = 0x1123456789ABCDEF;
    printf("hex number = 0x%" PRIx64 "\n", number);

    uint64_t swappedNumber = swapEndianness(number);
    printf("hex swapped number: 0x%" PRIx64 "\n", swappedNumber);
}

static void run_tests(void) {
    test_swap_endianness();
}

test_endianness_t test_endianness = { .run_tests = run_tests };
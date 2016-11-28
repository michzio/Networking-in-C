#include <stdio.h>
#include "test/test_endianness.h"

int main() {

    printf("Networking Library.\n");
    test_endianness.run_tests();

    return 0;
}
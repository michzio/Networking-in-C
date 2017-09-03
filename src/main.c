#include <stdio.h>
#include "../test/test_endianness.h"
#include "helpers/address_helper.h"

int main() {

    printf("Networking Library.\n");
    test_endianness.run_tests();

    print_current_interfaces_and_address();

    printf("CURRENT DEVICE IP ADDRESS (IPv4)\n");

    char *ip_address;
    get_current_address(AF_INET, &ip_address);
    printf("%s\n", ip_address);

    printf("CURRENT DEVICE IP ADDRESS (IPv6)\n");

    char *ip6_address;
    get_current_address(AF_INET6, &ip6_address);
    printf("%s\n", ip6_address);

    return 0;
}
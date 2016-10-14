cmake_minimum_required(VERSION 3.6)
project(Networking)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99")
set(SOURCE_FILES helpers/address_helper.h helpers/address_helper.c helpers/io_helper.h helpers/io_helper.c transfer/binary_transfer.h transfer/binary_transfer.c  transfer/integer_transfer.h common/network_types.h transfer/integer_transfer.c transfer/str_transfer.h transfer/str_transfer.c)
set(TEST_SOURCE_FILES )

# libraries paths
# none

add_library(Networking_Lib SHARED ${SOURCE_FILES})
set_target_properties(Networking_Lib PROPERTIES OUTPUT_NAME networking_shared)

add_library(Networking_Lib_Static ${SOURCE_FILES})
set_target_properties(Networking_Lib_Static PROPERTIES OUTPUT_NAME networking)

add_executable(Networking main.c ${TEST_SOURCE_FILES})
target_link_libraries(Networking Networking_Lib_Static)
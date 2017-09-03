cmake_minimum_required(VERSION 3.6)
project(Networking)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99")
set(SOURCE_FILES include/helpers/address_helper.h src/helpers/address_helper.c include/helpers/io_helper.h src/helpers/io_helper.c include/transfer/binary_transfer.h src/transfer/binary_transfer.c include/common/network_types.h include/common/endianness.h src/common/endianness.c include/transfer/integer_transfer.h src/transfer/integer_transfer.c include/transfer/str_transfer.h src/transfer/str_transfer.c libraries/android-ifaddrs/ifaddrs.c libraries/android-ifaddrs/ifaddrs.h)
set(TEST_SOURCE_FILES test/test_endianness.h test/test_endianness.c)

file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/outputs)
if(CYGWIN)
    # windows cygwin
    message("building for Cygwin")
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/outputs/lib/cygwin)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/outputs/lib/cygwin)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/outputs/bin/cygwin)
elseif(APPLE)
    # apple
    message("building for Apple")
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/outputs/lib/apple)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/outputs/lib/apple)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/outputs/bin/apple)
else()
    # unix
    message("building for Unix")
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/outputs/lib/unix)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/outputs/lib/unix)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/outputs/bin/unix)
endif()

### MAKING LIBRARIES ###
# include current project headers
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/libraries)
# include other project headers
set(COMMON_FUNCTIONS_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../common)
include_directories( ${COMMON_FUNCTIONS_SRC_DIR}/include )

# current project shared and static libraries creation
# SHARED
add_library(Networking_Lib SHARED ${SOURCE_FILES})
set_target_properties(Networking_Lib PROPERTIES OUTPUT_NAME networking)

# STATIC
add_library(Networking_Lib_Static ${SOURCE_FILES})
set_target_properties(Networking_Lib_Static PROPERTIES OUTPUT_NAME networking)

### MAKING EXECUTABLE ###
# executable's libraries paths
set(UNIT_TESTS_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../unit_tests)
set(COMPARERS_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../comparers)
if(CYGWIN)
    # windows cygwin
    set(UNIT_TESTS_LIB_PATH ${UNIT_TESTS_SRC_DIR}/outputs/lib/cygwin/libunit_tests.so)
    set(COMPARERS_LIB_PATH ${COMPARERS_SRC_DIR}/outputs/lib/cygwin/libcomparers.so)
elseif(APPLE)
    # apple
    set(UNIT_TESTS_LIB_PATH ${UNIT_TESTS_SRC_DIR}/outputs/lib/apple/libunit_tests.dylib)
    set(COMPARERS_LIB_PATH ${COMPARERS_SRC_DIR}/outputs/lib/apple/libcomparers.dylib)
else()
    # unix
    set(UNIT_TESTS_LIB_PATH ${UNIT_TESTS_SRC_DIR}/outputs/lib/unix/libunit_tests.so)
    set(COMPARERS_LIB_PATH ${COMPARERS_SRC_DIR}/outputs/lib/unix/libcomparers.so)
endif()
# executable's libraries import
add_library(Unit_Test_Lib SHARED IMPORTED)
set_target_properties( Unit_Test_Lib PROPERTIES IMPORTED_LOCATION ${UNIT_TESTS_LIB_PATH} )
add_library(Comparers_Lib SHARED IMPORTED)
set_target_properties( Comparers_Lib PROPERTIES IMPORTED_LOCATION ${COMPARERS_LIB_PATH} )

# executable's libraries include headers
include_directories( ${UNIT_TESTS_SRC_DIR}/include )
include_directories( ${COMPARERS_SRC_DIR}/include )

# current project executable creation
add_executable(Networking src/main.c ${TEST_SOURCE_FILES})
set_target_properties(Networking PROPERTIES OUTPUT_NAME networking)
target_link_libraries(Networking Networking_Lib)
target_link_libraries(Networking Unit_Test_Lib)
target_link_libraries(Networking Comparers_Lib)
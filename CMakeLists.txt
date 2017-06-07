cmake_minimum_required(VERSION 3.6)
project(Networking)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99")
set(SOURCE_FILES helpers/address_helper.h helpers/address_helper.c helpers/io_helper.h helpers/io_helper.c transfer/binary_transfer.h transfer/binary_transfer.c  common/network_types.h common/endianness.h common/endianness.c transfer/integer_transfer.h transfer/integer_transfer.c transfer/str_transfer.h transfer/str_transfer.c)
set(TEST_SOURCE_FILES test/test_endianness.h test/test_endianness.c)

if(CYGWIN)
    # windows cygwin
    message("building for Cygwin")
else()
    # unix
    message("building for Unix")
endif()

# libraries paths
set(UNIT_TESTS_PATH ${CMAKE_SOURCE_DIR}/../unit_tests)
if(CYGWIN)
    # windows cygwin
    set(UNIT_TESTS_LIB_PATH ${UNIT_TESTS_PATH}/output/windows/lib/static/libunit_tests.a)
else()
    # unix
    set(UNIT_TESTS_LIB_PATH ${UNIT_TESTS_PATH}/output/unix/lib/static/libunit_tests.a)
endif()

add_library(Networking_Lib SHARED ${SOURCE_FILES})
set_target_properties(Networking_Lib PROPERTIES OUTPUT_NAME networking)

add_library(Networking_Lib_Static ${SOURCE_FILES})
set_target_properties(Networking_Lib_Static PROPERTIES OUTPUT_NAME networking)

add_executable(Networking main.c ${TEST_SOURCE_FILES})
set_target_properties(Networking PROPERTIES OUTPUT_NAME networking)
target_link_libraries(Networking Networking_Lib_Static)
target_link_libraries(Networking ${UNIT_TESTS_LIB_PATH})

# install targets (executables, shared libraries, static libraries) in current project source directory
add_custom_target(Install_${PROJECT_NAME}
                  $(MAKE) install
                  DEPENDS ${PROJECT_NAME}
                  COMMENT "Installing ${PROJECT_NAME}")

if(CYGWIN)
    # windows cygwin
    set(RUNTIME_DEST_DIR ${CMAKE_SOURCE_DIR}/output/windows/bin)
    set(LIBRARY_DEST_DIR ${CMAKE_SOURCE_DIR}/output/windows/lib)
    set(ARCHIVE_DEST_DIR ${CMAKE_SOURCE_DIR}/output/windows/lib/static)
else()
    # unix
    set(RUNTIME_DEST_DIR ${CMAKE_SOURCE_DIR}/output/unix/bin)
    set(LIBRARY_DEST_DIR ${CMAKE_SOURCE_DIR}/output/unix/lib)
    set(ARCHIVE_DEST_DIR ${CMAKE_SOURCE_DIR}/output/unix/lib/static)
endif()

install(TARGETS Networking Networking_Lib Networking_Lib_Static
        RUNTIME DESTINATION ${RUNTIME_DEST_DIR}
        LIBRARY DESTINATION ${LIBRARY_DEST_DIR}
        ARCHIVE DESTINATION ${ARCHIVE_DEST_DIR})
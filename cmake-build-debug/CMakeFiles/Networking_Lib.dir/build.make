# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Networking_Lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Networking_Lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Networking_Lib.dir/flags.make

CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o: CMakeFiles/Networking_Lib.dir/flags.make
CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o: ../src/helpers/address_helper.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o   -c /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/helpers/address_helper.c

CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/helpers/address_helper.c > CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.i

CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/helpers/address_helper.c -o CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.s

CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o.requires:

.PHONY : CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o.requires

CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o.provides: CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o.requires
	$(MAKE) -f CMakeFiles/Networking_Lib.dir/build.make CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o.provides.build
.PHONY : CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o.provides

CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o.provides.build: CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o


CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o: CMakeFiles/Networking_Lib.dir/flags.make
CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o: ../src/helpers/io_helper.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o   -c /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/helpers/io_helper.c

CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/helpers/io_helper.c > CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.i

CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/helpers/io_helper.c -o CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.s

CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o.requires:

.PHONY : CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o.requires

CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o.provides: CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o.requires
	$(MAKE) -f CMakeFiles/Networking_Lib.dir/build.make CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o.provides.build
.PHONY : CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o.provides

CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o.provides.build: CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o


CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o: CMakeFiles/Networking_Lib.dir/flags.make
CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o: ../src/transfer/binary_transfer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o   -c /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/transfer/binary_transfer.c

CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/transfer/binary_transfer.c > CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.i

CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/transfer/binary_transfer.c -o CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.s

CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o.requires:

.PHONY : CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o.requires

CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o.provides: CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o.requires
	$(MAKE) -f CMakeFiles/Networking_Lib.dir/build.make CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o.provides.build
.PHONY : CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o.provides

CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o.provides.build: CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o


CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o: CMakeFiles/Networking_Lib.dir/flags.make
CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o: ../src/common/endianness.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o   -c /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/common/endianness.c

CMakeFiles/Networking_Lib.dir/src/common/endianness.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Networking_Lib.dir/src/common/endianness.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/common/endianness.c > CMakeFiles/Networking_Lib.dir/src/common/endianness.c.i

CMakeFiles/Networking_Lib.dir/src/common/endianness.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Networking_Lib.dir/src/common/endianness.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/common/endianness.c -o CMakeFiles/Networking_Lib.dir/src/common/endianness.c.s

CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o.requires:

.PHONY : CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o.requires

CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o.provides: CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o.requires
	$(MAKE) -f CMakeFiles/Networking_Lib.dir/build.make CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o.provides.build
.PHONY : CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o.provides

CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o.provides.build: CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o


CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o: CMakeFiles/Networking_Lib.dir/flags.make
CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o: ../src/transfer/integer_transfer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o   -c /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/transfer/integer_transfer.c

CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/transfer/integer_transfer.c > CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.i

CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/transfer/integer_transfer.c -o CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.s

CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o.requires:

.PHONY : CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o.requires

CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o.provides: CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o.requires
	$(MAKE) -f CMakeFiles/Networking_Lib.dir/build.make CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o.provides.build
.PHONY : CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o.provides

CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o.provides.build: CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o


CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o: CMakeFiles/Networking_Lib.dir/flags.make
CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o: ../src/transfer/str_transfer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o   -c /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/transfer/str_transfer.c

CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/transfer/str_transfer.c > CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.i

CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/src/transfer/str_transfer.c -o CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.s

CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o.requires:

.PHONY : CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o.requires

CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o.provides: CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o.requires
	$(MAKE) -f CMakeFiles/Networking_Lib.dir/build.make CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o.provides.build
.PHONY : CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o.provides

CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o.provides.build: CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o


CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o: CMakeFiles/Networking_Lib.dir/flags.make
CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o: ../libraries/android-ifaddrs/ifaddrs.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o   -c /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/libraries/android-ifaddrs/ifaddrs.c

CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/libraries/android-ifaddrs/ifaddrs.c > CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.i

CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/libraries/android-ifaddrs/ifaddrs.c -o CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.s

CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o.requires:

.PHONY : CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o.requires

CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o.provides: CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o.requires
	$(MAKE) -f CMakeFiles/Networking_Lib.dir/build.make CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o.provides.build
.PHONY : CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o.provides

CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o.provides.build: CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o


# Object files for target Networking_Lib
Networking_Lib_OBJECTS = \
"CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o" \
"CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o" \
"CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o" \
"CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o" \
"CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o" \
"CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o" \
"CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o"

# External object files for target Networking_Lib
Networking_Lib_EXTERNAL_OBJECTS =

../outputs/lib/apple/libnetworking.dylib: CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o
../outputs/lib/apple/libnetworking.dylib: CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o
../outputs/lib/apple/libnetworking.dylib: CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o
../outputs/lib/apple/libnetworking.dylib: CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o
../outputs/lib/apple/libnetworking.dylib: CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o
../outputs/lib/apple/libnetworking.dylib: CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o
../outputs/lib/apple/libnetworking.dylib: CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o
../outputs/lib/apple/libnetworking.dylib: CMakeFiles/Networking_Lib.dir/build.make
../outputs/lib/apple/libnetworking.dylib: CMakeFiles/Networking_Lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C shared library ../outputs/lib/apple/libnetworking.dylib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Networking_Lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Networking_Lib.dir/build: ../outputs/lib/apple/libnetworking.dylib

.PHONY : CMakeFiles/Networking_Lib.dir/build

CMakeFiles/Networking_Lib.dir/requires: CMakeFiles/Networking_Lib.dir/src/helpers/address_helper.c.o.requires
CMakeFiles/Networking_Lib.dir/requires: CMakeFiles/Networking_Lib.dir/src/helpers/io_helper.c.o.requires
CMakeFiles/Networking_Lib.dir/requires: CMakeFiles/Networking_Lib.dir/src/transfer/binary_transfer.c.o.requires
CMakeFiles/Networking_Lib.dir/requires: CMakeFiles/Networking_Lib.dir/src/common/endianness.c.o.requires
CMakeFiles/Networking_Lib.dir/requires: CMakeFiles/Networking_Lib.dir/src/transfer/integer_transfer.c.o.requires
CMakeFiles/Networking_Lib.dir/requires: CMakeFiles/Networking_Lib.dir/src/transfer/str_transfer.c.o.requires
CMakeFiles/Networking_Lib.dir/requires: CMakeFiles/Networking_Lib.dir/libraries/android-ifaddrs/ifaddrs.c.o.requires

.PHONY : CMakeFiles/Networking_Lib.dir/requires

CMakeFiles/Networking_Lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Networking_Lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Networking_Lib.dir/clean

CMakeFiles/Networking_Lib.dir/depend:
	cd /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/cmake-build-debug /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/cmake-build-debug /Users/michzio/Developer/MyProjects/BachelorDegree/c/networking/cmake-build-debug/CMakeFiles/Networking_Lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Networking_Lib.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/310/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/310/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cyprian/CLionProjects/zadanko/sklep-kasa

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cyprian/CLionProjects/zadanko/sklep-kasa/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sklep_kasa_tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sklep_kasa_tests.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sklep_kasa_tests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sklep_kasa_tests.dir/flags.make

CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.o: CMakeFiles/sklep_kasa_tests.dir/flags.make
CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.o: /home/cyprian/CLionProjects/zadanko/sklep-kasa/tests/BasketTest.cpp
CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.o: CMakeFiles/sklep_kasa_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cyprian/CLionProjects/zadanko/sklep-kasa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.o -MF CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.o.d -o CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.o -c /home/cyprian/CLionProjects/zadanko/sklep-kasa/tests/BasketTest.cpp

CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cyprian/CLionProjects/zadanko/sklep-kasa/tests/BasketTest.cpp > CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.i

CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cyprian/CLionProjects/zadanko/sklep-kasa/tests/BasketTest.cpp -o CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.s

CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.o: CMakeFiles/sklep_kasa_tests.dir/flags.make
CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.o: /home/cyprian/CLionProjects/zadanko/sklep-kasa/tests/ShopTest.cpp
CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.o: CMakeFiles/sklep_kasa_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cyprian/CLionProjects/zadanko/sklep-kasa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.o -MF CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.o.d -o CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.o -c /home/cyprian/CLionProjects/zadanko/sklep-kasa/tests/ShopTest.cpp

CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cyprian/CLionProjects/zadanko/sklep-kasa/tests/ShopTest.cpp > CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.i

CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cyprian/CLionProjects/zadanko/sklep-kasa/tests/ShopTest.cpp -o CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.s

CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.o: CMakeFiles/sklep_kasa_tests.dir/flags.make
CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.o: /home/cyprian/CLionProjects/zadanko/sklep-kasa/tests/DataTest.cpp
CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.o: CMakeFiles/sklep_kasa_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cyprian/CLionProjects/zadanko/sklep-kasa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.o -MF CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.o.d -o CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.o -c /home/cyprian/CLionProjects/zadanko/sklep-kasa/tests/DataTest.cpp

CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cyprian/CLionProjects/zadanko/sklep-kasa/tests/DataTest.cpp > CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.i

CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cyprian/CLionProjects/zadanko/sklep-kasa/tests/DataTest.cpp -o CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.s

CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.o: CMakeFiles/sklep_kasa_tests.dir/flags.make
CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.o: /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Product.cpp
CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.o: CMakeFiles/sklep_kasa_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cyprian/CLionProjects/zadanko/sklep-kasa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.o -MF CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.o.d -o CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.o -c /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Product.cpp

CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Product.cpp > CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.i

CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Product.cpp -o CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.s

CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.o: CMakeFiles/sklep_kasa_tests.dir/flags.make
CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.o: /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Data.cpp
CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.o: CMakeFiles/sklep_kasa_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cyprian/CLionProjects/zadanko/sklep-kasa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.o -MF CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.o.d -o CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.o -c /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Data.cpp

CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Data.cpp > CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.i

CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Data.cpp -o CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.s

CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.o: CMakeFiles/sklep_kasa_tests.dir/flags.make
CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.o: /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Shop.cpp
CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.o: CMakeFiles/sklep_kasa_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cyprian/CLionProjects/zadanko/sklep-kasa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.o -MF CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.o.d -o CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.o -c /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Shop.cpp

CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Shop.cpp > CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.i

CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Shop.cpp -o CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.s

CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.o: CMakeFiles/sklep_kasa_tests.dir/flags.make
CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.o: /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Basket.cpp
CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.o: CMakeFiles/sklep_kasa_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cyprian/CLionProjects/zadanko/sklep-kasa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.o -MF CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.o.d -o CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.o -c /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Basket.cpp

CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Basket.cpp > CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.i

CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cyprian/CLionProjects/zadanko/sklep-kasa/src/Basket.cpp -o CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.s

# Object files for target sklep_kasa_tests
sklep_kasa_tests_OBJECTS = \
"CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.o" \
"CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.o" \
"CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.o" \
"CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.o" \
"CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.o" \
"CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.o" \
"CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.o"

# External object files for target sklep_kasa_tests
sklep_kasa_tests_EXTERNAL_OBJECTS =

sklep_kasa_tests: CMakeFiles/sklep_kasa_tests.dir/tests/BasketTest.cpp.o
sklep_kasa_tests: CMakeFiles/sklep_kasa_tests.dir/tests/ShopTest.cpp.o
sklep_kasa_tests: CMakeFiles/sklep_kasa_tests.dir/tests/DataTest.cpp.o
sklep_kasa_tests: CMakeFiles/sklep_kasa_tests.dir/src/Product.cpp.o
sklep_kasa_tests: CMakeFiles/sklep_kasa_tests.dir/src/Data.cpp.o
sklep_kasa_tests: CMakeFiles/sklep_kasa_tests.dir/src/Shop.cpp.o
sklep_kasa_tests: CMakeFiles/sklep_kasa_tests.dir/src/Basket.cpp.o
sklep_kasa_tests: CMakeFiles/sklep_kasa_tests.dir/build.make
sklep_kasa_tests: /usr/local/lib/libgtest_main.a
sklep_kasa_tests: /usr/local/lib/libgtest.a
sklep_kasa_tests: CMakeFiles/sklep_kasa_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/cyprian/CLionProjects/zadanko/sklep-kasa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable sklep_kasa_tests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sklep_kasa_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sklep_kasa_tests.dir/build: sklep_kasa_tests
.PHONY : CMakeFiles/sklep_kasa_tests.dir/build

CMakeFiles/sklep_kasa_tests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sklep_kasa_tests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sklep_kasa_tests.dir/clean

CMakeFiles/sklep_kasa_tests.dir/depend:
	cd /home/cyprian/CLionProjects/zadanko/sklep-kasa/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cyprian/CLionProjects/zadanko/sklep-kasa /home/cyprian/CLionProjects/zadanko/sklep-kasa /home/cyprian/CLionProjects/zadanko/sklep-kasa/cmake-build-debug /home/cyprian/CLionProjects/zadanko/sklep-kasa/cmake-build-debug /home/cyprian/CLionProjects/zadanko/sklep-kasa/cmake-build-debug/CMakeFiles/sklep_kasa_tests.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/sklep_kasa_tests.dir/depend

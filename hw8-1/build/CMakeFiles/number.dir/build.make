# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/doyoungkim/2016035050/hw8-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/doyoungkim/2016035050/hw8-1/build

# Include any dependencies generated for this target.
include CMakeFiles/number.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/number.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/number.dir/flags.make

CMakeFiles/number.dir/number.o: CMakeFiles/number.dir/flags.make
CMakeFiles/number.dir/number.o: ../number.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doyoungkim/2016035050/hw8-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/number.dir/number.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/number.dir/number.o -c /home/doyoungkim/2016035050/hw8-1/number.cc

CMakeFiles/number.dir/number.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/number.dir/number.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/doyoungkim/2016035050/hw8-1/number.cc > CMakeFiles/number.dir/number.i

CMakeFiles/number.dir/number.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/number.dir/number.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/doyoungkim/2016035050/hw8-1/number.cc -o CMakeFiles/number.dir/number.s

CMakeFiles/number.dir/number.o.requires:

.PHONY : CMakeFiles/number.dir/number.o.requires

CMakeFiles/number.dir/number.o.provides: CMakeFiles/number.dir/number.o.requires
	$(MAKE) -f CMakeFiles/number.dir/build.make CMakeFiles/number.dir/number.o.provides.build
.PHONY : CMakeFiles/number.dir/number.o.provides

CMakeFiles/number.dir/number.o.provides.build: CMakeFiles/number.dir/number.o


CMakeFiles/number.dir/number_main.o: CMakeFiles/number.dir/flags.make
CMakeFiles/number.dir/number_main.o: ../number_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doyoungkim/2016035050/hw8-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/number.dir/number_main.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/number.dir/number_main.o -c /home/doyoungkim/2016035050/hw8-1/number_main.cc

CMakeFiles/number.dir/number_main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/number.dir/number_main.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/doyoungkim/2016035050/hw8-1/number_main.cc > CMakeFiles/number.dir/number_main.i

CMakeFiles/number.dir/number_main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/number.dir/number_main.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/doyoungkim/2016035050/hw8-1/number_main.cc -o CMakeFiles/number.dir/number_main.s

CMakeFiles/number.dir/number_main.o.requires:

.PHONY : CMakeFiles/number.dir/number_main.o.requires

CMakeFiles/number.dir/number_main.o.provides: CMakeFiles/number.dir/number_main.o.requires
	$(MAKE) -f CMakeFiles/number.dir/build.make CMakeFiles/number.dir/number_main.o.provides.build
.PHONY : CMakeFiles/number.dir/number_main.o.provides

CMakeFiles/number.dir/number_main.o.provides.build: CMakeFiles/number.dir/number_main.o


# Object files for target number
number_OBJECTS = \
"CMakeFiles/number.dir/number.o" \
"CMakeFiles/number.dir/number_main.o"

# External object files for target number
number_EXTERNAL_OBJECTS =

number: CMakeFiles/number.dir/number.o
number: CMakeFiles/number.dir/number_main.o
number: CMakeFiles/number.dir/build.make
number: CMakeFiles/number.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/doyoungkim/2016035050/hw8-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable number"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/number.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/number.dir/build: number

.PHONY : CMakeFiles/number.dir/build

CMakeFiles/number.dir/requires: CMakeFiles/number.dir/number.o.requires
CMakeFiles/number.dir/requires: CMakeFiles/number.dir/number_main.o.requires

.PHONY : CMakeFiles/number.dir/requires

CMakeFiles/number.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/number.dir/cmake_clean.cmake
.PHONY : CMakeFiles/number.dir/clean

CMakeFiles/number.dir/depend:
	cd /home/doyoungkim/2016035050/hw8-1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/doyoungkim/2016035050/hw8-1 /home/doyoungkim/2016035050/hw8-1 /home/doyoungkim/2016035050/hw8-1/build /home/doyoungkim/2016035050/hw8-1/build /home/doyoungkim/2016035050/hw8-1/build/CMakeFiles/number.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/number.dir/depend

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
CMAKE_SOURCE_DIR = /home/doyoungkim/2016035050/hw6-3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/doyoungkim/2016035050/hw6-3/build

# Include any dependencies generated for this target.
include CMakeFiles/minimal_fighter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/minimal_fighter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/minimal_fighter.dir/flags.make

CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o: CMakeFiles/minimal_fighter.dir/flags.make
CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o: ../minimal_fighter.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doyoungkim/2016035050/hw6-3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o -c /home/doyoungkim/2016035050/hw6-3/minimal_fighter.cc

CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/doyoungkim/2016035050/hw6-3/minimal_fighter.cc > CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.i

CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/doyoungkim/2016035050/hw6-3/minimal_fighter.cc -o CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.s

CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o.requires:

.PHONY : CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o.requires

CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o.provides: CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o.requires
	$(MAKE) -f CMakeFiles/minimal_fighter.dir/build.make CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o.provides.build
.PHONY : CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o.provides

CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o.provides.build: CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o


CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o: CMakeFiles/minimal_fighter.dir/flags.make
CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o: ../minimal_fighter_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doyoungkim/2016035050/hw6-3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o -c /home/doyoungkim/2016035050/hw6-3/minimal_fighter_main.cc

CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/doyoungkim/2016035050/hw6-3/minimal_fighter_main.cc > CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.i

CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/doyoungkim/2016035050/hw6-3/minimal_fighter_main.cc -o CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.s

CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o.requires:

.PHONY : CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o.requires

CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o.provides: CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o.requires
	$(MAKE) -f CMakeFiles/minimal_fighter.dir/build.make CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o.provides.build
.PHONY : CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o.provides

CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o.provides.build: CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o


# Object files for target minimal_fighter
minimal_fighter_OBJECTS = \
"CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o" \
"CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o"

# External object files for target minimal_fighter
minimal_fighter_EXTERNAL_OBJECTS =

minimal_fighter: CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o
minimal_fighter: CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o
minimal_fighter: CMakeFiles/minimal_fighter.dir/build.make
minimal_fighter: CMakeFiles/minimal_fighter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/doyoungkim/2016035050/hw6-3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable minimal_fighter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/minimal_fighter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/minimal_fighter.dir/build: minimal_fighter

.PHONY : CMakeFiles/minimal_fighter.dir/build

CMakeFiles/minimal_fighter.dir/requires: CMakeFiles/minimal_fighter.dir/minimal_fighter.cc.o.requires
CMakeFiles/minimal_fighter.dir/requires: CMakeFiles/minimal_fighter.dir/minimal_fighter_main.cc.o.requires

.PHONY : CMakeFiles/minimal_fighter.dir/requires

CMakeFiles/minimal_fighter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/minimal_fighter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/minimal_fighter.dir/clean

CMakeFiles/minimal_fighter.dir/depend:
	cd /home/doyoungkim/2016035050/hw6-3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/doyoungkim/2016035050/hw6-3 /home/doyoungkim/2016035050/hw6-3 /home/doyoungkim/2016035050/hw6-3/build /home/doyoungkim/2016035050/hw6-3/build /home/doyoungkim/2016035050/hw6-3/build/CMakeFiles/minimal_fighter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/minimal_fighter.dir/depend


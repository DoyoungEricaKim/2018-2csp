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
CMAKE_SOURCE_DIR = /home/doyoungkim/2016035050/hw12-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/doyoungkim/2016035050/hw12-2/build

# Include any dependencies generated for this target.
include CMakeFiles/my_shared_ptr.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/my_shared_ptr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_shared_ptr.dir/flags.make

CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o: CMakeFiles/my_shared_ptr.dir/flags.make
CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o: ../my_shared_ptr_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doyoungkim/2016035050/hw12-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o -c /home/doyoungkim/2016035050/hw12-2/my_shared_ptr_main.cc

CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/doyoungkim/2016035050/hw12-2/my_shared_ptr_main.cc > CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.i

CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/doyoungkim/2016035050/hw12-2/my_shared_ptr_main.cc -o CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.s

CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o.requires:

.PHONY : CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o.requires

CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o.provides: CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o.requires
	$(MAKE) -f CMakeFiles/my_shared_ptr.dir/build.make CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o.provides.build
.PHONY : CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o.provides

CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o.provides.build: CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o


# Object files for target my_shared_ptr
my_shared_ptr_OBJECTS = \
"CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o"

# External object files for target my_shared_ptr
my_shared_ptr_EXTERNAL_OBJECTS =

my_shared_ptr: CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o
my_shared_ptr: CMakeFiles/my_shared_ptr.dir/build.make
my_shared_ptr: CMakeFiles/my_shared_ptr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/doyoungkim/2016035050/hw12-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable my_shared_ptr"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_shared_ptr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_shared_ptr.dir/build: my_shared_ptr

.PHONY : CMakeFiles/my_shared_ptr.dir/build

CMakeFiles/my_shared_ptr.dir/requires: CMakeFiles/my_shared_ptr.dir/my_shared_ptr_main.cc.o.requires

.PHONY : CMakeFiles/my_shared_ptr.dir/requires

CMakeFiles/my_shared_ptr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_shared_ptr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_shared_ptr.dir/clean

CMakeFiles/my_shared_ptr.dir/depend:
	cd /home/doyoungkim/2016035050/hw12-2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/doyoungkim/2016035050/hw12-2 /home/doyoungkim/2016035050/hw12-2 /home/doyoungkim/2016035050/hw12-2/build /home/doyoungkim/2016035050/hw12-2/build /home/doyoungkim/2016035050/hw12-2/build/CMakeFiles/my_shared_ptr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_shared_ptr.dir/depend

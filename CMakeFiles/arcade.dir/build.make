# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/calbo/Bureau/arcade

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/calbo/Bureau/arcade

# Include any dependencies generated for this target.
include CMakeFiles/arcade.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/arcade.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arcade.dir/flags.make

CMakeFiles/arcade.dir/main.cpp.o: CMakeFiles/arcade.dir/flags.make
CMakeFiles/arcade.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/calbo/Bureau/arcade/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arcade.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arcade.dir/main.cpp.o -c /home/calbo/Bureau/arcade/main.cpp

CMakeFiles/arcade.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arcade.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/calbo/Bureau/arcade/main.cpp > CMakeFiles/arcade.dir/main.cpp.i

CMakeFiles/arcade.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arcade.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/calbo/Bureau/arcade/main.cpp -o CMakeFiles/arcade.dir/main.cpp.s

CMakeFiles/arcade.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/arcade.dir/main.cpp.o.requires

CMakeFiles/arcade.dir/main.cpp.o.provides: CMakeFiles/arcade.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/arcade.dir/build.make CMakeFiles/arcade.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/arcade.dir/main.cpp.o.provides

CMakeFiles/arcade.dir/main.cpp.o.provides.build: CMakeFiles/arcade.dir/main.cpp.o


# Object files for target arcade
arcade_OBJECTS = \
"CMakeFiles/arcade.dir/main.cpp.o"

# External object files for target arcade
arcade_EXTERNAL_OBJECTS =

arcade: CMakeFiles/arcade.dir/main.cpp.o
arcade: CMakeFiles/arcade.dir/build.make
arcade: CMakeFiles/arcade.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/calbo/Bureau/arcade/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable arcade"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arcade.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arcade.dir/build: arcade

.PHONY : CMakeFiles/arcade.dir/build

CMakeFiles/arcade.dir/requires: CMakeFiles/arcade.dir/main.cpp.o.requires

.PHONY : CMakeFiles/arcade.dir/requires

CMakeFiles/arcade.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/arcade.dir/cmake_clean.cmake
.PHONY : CMakeFiles/arcade.dir/clean

CMakeFiles/arcade.dir/depend:
	cd /home/calbo/Bureau/arcade && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/calbo/Bureau/arcade /home/calbo/Bureau/arcade /home/calbo/Bureau/arcade /home/calbo/Bureau/arcade /home/calbo/Bureau/arcade/CMakeFiles/arcade.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/arcade.dir/depend


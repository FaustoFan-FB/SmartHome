# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /snap/clion/158/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/158/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fausto/Code/WorkSpace/Intelligense_Housekeeper

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fausto/Code/WorkSpace/Intelligense_Housekeeper/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/chapter-Day04.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chapter-Day04.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chapter-Day04.dir/flags.make

CMakeFiles/chapter-Day04.dir/chapter-Day04/main.c.o: CMakeFiles/chapter-Day04.dir/flags.make
CMakeFiles/chapter-Day04.dir/chapter-Day04/main.c.o: ../chapter-Day04/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fausto/Code/WorkSpace/Intelligense_Housekeeper/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/chapter-Day04.dir/chapter-Day04/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/chapter-Day04.dir/chapter-Day04/main.c.o -c /home/fausto/Code/WorkSpace/Intelligense_Housekeeper/chapter-Day04/main.c

CMakeFiles/chapter-Day04.dir/chapter-Day04/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/chapter-Day04.dir/chapter-Day04/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/fausto/Code/WorkSpace/Intelligense_Housekeeper/chapter-Day04/main.c > CMakeFiles/chapter-Day04.dir/chapter-Day04/main.c.i

CMakeFiles/chapter-Day04.dir/chapter-Day04/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/chapter-Day04.dir/chapter-Day04/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/fausto/Code/WorkSpace/Intelligense_Housekeeper/chapter-Day04/main.c -o CMakeFiles/chapter-Day04.dir/chapter-Day04/main.c.s

CMakeFiles/chapter-Day04.dir/chapter-Day04/file_copy.c.o: CMakeFiles/chapter-Day04.dir/flags.make
CMakeFiles/chapter-Day04.dir/chapter-Day04/file_copy.c.o: ../chapter-Day04/file_copy.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fausto/Code/WorkSpace/Intelligense_Housekeeper/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/chapter-Day04.dir/chapter-Day04/file_copy.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/chapter-Day04.dir/chapter-Day04/file_copy.c.o -c /home/fausto/Code/WorkSpace/Intelligense_Housekeeper/chapter-Day04/file_copy.c

CMakeFiles/chapter-Day04.dir/chapter-Day04/file_copy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/chapter-Day04.dir/chapter-Day04/file_copy.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/fausto/Code/WorkSpace/Intelligense_Housekeeper/chapter-Day04/file_copy.c > CMakeFiles/chapter-Day04.dir/chapter-Day04/file_copy.c.i

CMakeFiles/chapter-Day04.dir/chapter-Day04/file_copy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/chapter-Day04.dir/chapter-Day04/file_copy.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/fausto/Code/WorkSpace/Intelligense_Housekeeper/chapter-Day04/file_copy.c -o CMakeFiles/chapter-Day04.dir/chapter-Day04/file_copy.c.s

# Object files for target chapter-Day04
chapter__Day04_OBJECTS = \
"CMakeFiles/chapter-Day04.dir/chapter-Day04/main.c.o" \
"CMakeFiles/chapter-Day04.dir/chapter-Day04/file_copy.c.o"

# External object files for target chapter-Day04
chapter__Day04_EXTERNAL_OBJECTS =

chapter-Day04: CMakeFiles/chapter-Day04.dir/chapter-Day04/main.c.o
chapter-Day04: CMakeFiles/chapter-Day04.dir/chapter-Day04/file_copy.c.o
chapter-Day04: CMakeFiles/chapter-Day04.dir/build.make
chapter-Day04: CMakeFiles/chapter-Day04.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fausto/Code/WorkSpace/Intelligense_Housekeeper/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable chapter-Day04"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chapter-Day04.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chapter-Day04.dir/build: chapter-Day04

.PHONY : CMakeFiles/chapter-Day04.dir/build

CMakeFiles/chapter-Day04.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chapter-Day04.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chapter-Day04.dir/clean

CMakeFiles/chapter-Day04.dir/depend:
	cd /home/fausto/Code/WorkSpace/Intelligense_Housekeeper/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fausto/Code/WorkSpace/Intelligense_Housekeeper /home/fausto/Code/WorkSpace/Intelligense_Housekeeper /home/fausto/Code/WorkSpace/Intelligense_Housekeeper/cmake-build-debug /home/fausto/Code/WorkSpace/Intelligense_Housekeeper/cmake-build-debug /home/fausto/Code/WorkSpace/Intelligense_Housekeeper/cmake-build-debug/CMakeFiles/chapter-Day04.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chapter-Day04.dir/depend

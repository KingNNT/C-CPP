# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1"

# Include any dependencies generated for this target.
include CMakeFiles/hellworld.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hellworld.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hellworld.dir/flags.make

CMakeFiles/hellworld.dir/src/main.cpp.o: CMakeFiles/hellworld.dir/flags.make
CMakeFiles/hellworld.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hellworld.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hellworld.dir/src/main.cpp.o -c "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/src/main.cpp"

CMakeFiles/hellworld.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hellworld.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/src/main.cpp" > CMakeFiles/hellworld.dir/src/main.cpp.i

CMakeFiles/hellworld.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hellworld.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/src/main.cpp" -o CMakeFiles/hellworld.dir/src/main.cpp.s

CMakeFiles/hellworld.dir/src/greetings_en.cpp.o: CMakeFiles/hellworld.dir/flags.make
CMakeFiles/hellworld.dir/src/greetings_en.cpp.o: src/greetings_en.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hellworld.dir/src/greetings_en.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hellworld.dir/src/greetings_en.cpp.o -c "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/src/greetings_en.cpp"

CMakeFiles/hellworld.dir/src/greetings_en.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hellworld.dir/src/greetings_en.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/src/greetings_en.cpp" > CMakeFiles/hellworld.dir/src/greetings_en.cpp.i

CMakeFiles/hellworld.dir/src/greetings_en.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hellworld.dir/src/greetings_en.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/src/greetings_en.cpp" -o CMakeFiles/hellworld.dir/src/greetings_en.cpp.s

CMakeFiles/hellworld.dir/src/greetings_ja.cpp.o: CMakeFiles/hellworld.dir/flags.make
CMakeFiles/hellworld.dir/src/greetings_ja.cpp.o: src/greetings_ja.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hellworld.dir/src/greetings_ja.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hellworld.dir/src/greetings_ja.cpp.o -c "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/src/greetings_ja.cpp"

CMakeFiles/hellworld.dir/src/greetings_ja.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hellworld.dir/src/greetings_ja.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/src/greetings_ja.cpp" > CMakeFiles/hellworld.dir/src/greetings_ja.cpp.i

CMakeFiles/hellworld.dir/src/greetings_ja.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hellworld.dir/src/greetings_ja.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/src/greetings_ja.cpp" -o CMakeFiles/hellworld.dir/src/greetings_ja.cpp.s

CMakeFiles/hellworld.dir/src/greetings_vi.cpp.o: CMakeFiles/hellworld.dir/flags.make
CMakeFiles/hellworld.dir/src/greetings_vi.cpp.o: src/greetings_vi.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/hellworld.dir/src/greetings_vi.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hellworld.dir/src/greetings_vi.cpp.o -c "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/src/greetings_vi.cpp"

CMakeFiles/hellworld.dir/src/greetings_vi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hellworld.dir/src/greetings_vi.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/src/greetings_vi.cpp" > CMakeFiles/hellworld.dir/src/greetings_vi.cpp.i

CMakeFiles/hellworld.dir/src/greetings_vi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hellworld.dir/src/greetings_vi.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/src/greetings_vi.cpp" -o CMakeFiles/hellworld.dir/src/greetings_vi.cpp.s

# Object files for target hellworld
hellworld_OBJECTS = \
"CMakeFiles/hellworld.dir/src/main.cpp.o" \
"CMakeFiles/hellworld.dir/src/greetings_en.cpp.o" \
"CMakeFiles/hellworld.dir/src/greetings_ja.cpp.o" \
"CMakeFiles/hellworld.dir/src/greetings_vi.cpp.o"

# External object files for target hellworld
hellworld_EXTERNAL_OBJECTS =

hellworld: CMakeFiles/hellworld.dir/src/main.cpp.o
hellworld: CMakeFiles/hellworld.dir/src/greetings_en.cpp.o
hellworld: CMakeFiles/hellworld.dir/src/greetings_ja.cpp.o
hellworld: CMakeFiles/hellworld.dir/src/greetings_vi.cpp.o
hellworld: CMakeFiles/hellworld.dir/build.make
hellworld: CMakeFiles/hellworld.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable hellworld"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hellworld.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hellworld.dir/build: hellworld

.PHONY : CMakeFiles/hellworld.dir/build

CMakeFiles/hellworld.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hellworld.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hellworld.dir/clean

CMakeFiles/hellworld.dir/depend:
	cd "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1" "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1" "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1" "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1" "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/Learning/Source/Basic/CMake/Ex1/CMakeFiles/hellworld.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/hellworld.dir/depend

# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\lassi\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7223.86\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\lassi\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7223.86\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\tuni_c\assignments

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\tuni_c\assignments\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/assignments.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/assignments.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assignments.dir/flags.make

CMakeFiles/assignments.dir/main.c.obj: CMakeFiles/assignments.dir/flags.make
CMakeFiles/assignments.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\tuni_c\assignments\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/assignments.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\assignments.dir\main.c.obj   -c F:\tuni_c\assignments\main.c

CMakeFiles/assignments.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assignments.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\tuni_c\assignments\main.c > CMakeFiles\assignments.dir\main.c.i

CMakeFiles/assignments.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assignments.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\tuni_c\assignments\main.c -o CMakeFiles\assignments.dir\main.c.s

CMakeFiles/assignments.dir/section1/arvorajat.c.obj: CMakeFiles/assignments.dir/flags.make
CMakeFiles/assignments.dir/section1/arvorajat.c.obj: ../section1/arvorajat.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\tuni_c\assignments\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/assignments.dir/section1/arvorajat.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\assignments.dir\section1\arvorajat.c.obj   -c F:\tuni_c\assignments\section1\arvorajat.c

CMakeFiles/assignments.dir/section1/arvorajat.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assignments.dir/section1/arvorajat.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\tuni_c\assignments\section1\arvorajat.c > CMakeFiles\assignments.dir\section1\arvorajat.c.i

CMakeFiles/assignments.dir/section1/arvorajat.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assignments.dir/section1/arvorajat.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\tuni_c\assignments\section1\arvorajat.c -o CMakeFiles\assignments.dir\section1\arvorajat.c.s

CMakeFiles/assignments.dir/section1/luvut.c.obj: CMakeFiles/assignments.dir/flags.make
CMakeFiles/assignments.dir/section1/luvut.c.obj: ../section1/luvut.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\tuni_c\assignments\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/assignments.dir/section1/luvut.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\assignments.dir\section1\luvut.c.obj   -c F:\tuni_c\assignments\section1\luvut.c

CMakeFiles/assignments.dir/section1/luvut.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assignments.dir/section1/luvut.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\tuni_c\assignments\section1\luvut.c > CMakeFiles\assignments.dir\section1\luvut.c.i

CMakeFiles/assignments.dir/section1/luvut.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assignments.dir/section1/luvut.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\tuni_c\assignments\section1\luvut.c -o CMakeFiles\assignments.dir\section1\luvut.c.s

# Object files for target assignments
assignments_OBJECTS = \
"CMakeFiles/assignments.dir/main.c.obj" \
"CMakeFiles/assignments.dir/section1/arvorajat.c.obj" \
"CMakeFiles/assignments.dir/section1/luvut.c.obj"

# External object files for target assignments
assignments_EXTERNAL_OBJECTS =

assignments.exe: CMakeFiles/assignments.dir/main.c.obj
assignments.exe: CMakeFiles/assignments.dir/section1/arvorajat.c.obj
assignments.exe: CMakeFiles/assignments.dir/section1/luvut.c.obj
assignments.exe: CMakeFiles/assignments.dir/build.make
assignments.exe: CMakeFiles/assignments.dir/linklibs.rsp
assignments.exe: CMakeFiles/assignments.dir/objects1.rsp
assignments.exe: CMakeFiles/assignments.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\tuni_c\assignments\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable assignments.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\assignments.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assignments.dir/build: assignments.exe

.PHONY : CMakeFiles/assignments.dir/build

CMakeFiles/assignments.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\assignments.dir\cmake_clean.cmake
.PHONY : CMakeFiles/assignments.dir/clean

CMakeFiles/assignments.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\tuni_c\assignments F:\tuni_c\assignments F:\tuni_c\assignments\cmake-build-debug F:\tuni_c\assignments\cmake-build-debug F:\tuni_c\assignments\cmake-build-debug\CMakeFiles\assignments.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/assignments.dir/depend


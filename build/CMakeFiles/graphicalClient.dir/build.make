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
CMAKE_SOURCE_DIR = /home/felix/git/ssl-vision

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/felix/git/ssl-vision/build

# Include any dependencies generated for this target.
include CMakeFiles/graphicalClient.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/graphicalClient.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/graphicalClient.dir/flags.make

CMakeFiles/graphicalClient.dir/graphicalClient_autogen/mocs_compilation.cpp.o: CMakeFiles/graphicalClient.dir/flags.make
CMakeFiles/graphicalClient.dir/graphicalClient_autogen/mocs_compilation.cpp.o: graphicalClient_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felix/git/ssl-vision/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/graphicalClient.dir/graphicalClient_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphicalClient.dir/graphicalClient_autogen/mocs_compilation.cpp.o -c /home/felix/git/ssl-vision/build/graphicalClient_autogen/mocs_compilation.cpp

CMakeFiles/graphicalClient.dir/graphicalClient_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphicalClient.dir/graphicalClient_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felix/git/ssl-vision/build/graphicalClient_autogen/mocs_compilation.cpp > CMakeFiles/graphicalClient.dir/graphicalClient_autogen/mocs_compilation.cpp.i

CMakeFiles/graphicalClient.dir/graphicalClient_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphicalClient.dir/graphicalClient_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felix/git/ssl-vision/build/graphicalClient_autogen/mocs_compilation.cpp -o CMakeFiles/graphicalClient.dir/graphicalClient_autogen/mocs_compilation.cpp.s

CMakeFiles/graphicalClient.dir/src/graphicalClient/main.cpp.o: CMakeFiles/graphicalClient.dir/flags.make
CMakeFiles/graphicalClient.dir/src/graphicalClient/main.cpp.o: ../src/graphicalClient/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felix/git/ssl-vision/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/graphicalClient.dir/src/graphicalClient/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphicalClient.dir/src/graphicalClient/main.cpp.o -c /home/felix/git/ssl-vision/src/graphicalClient/main.cpp

CMakeFiles/graphicalClient.dir/src/graphicalClient/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphicalClient.dir/src/graphicalClient/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felix/git/ssl-vision/src/graphicalClient/main.cpp > CMakeFiles/graphicalClient.dir/src/graphicalClient/main.cpp.i

CMakeFiles/graphicalClient.dir/src/graphicalClient/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphicalClient.dir/src/graphicalClient/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felix/git/ssl-vision/src/graphicalClient/main.cpp -o CMakeFiles/graphicalClient.dir/src/graphicalClient/main.cpp.s

CMakeFiles/graphicalClient.dir/src/graphicalClient/soccerview.cpp.o: CMakeFiles/graphicalClient.dir/flags.make
CMakeFiles/graphicalClient.dir/src/graphicalClient/soccerview.cpp.o: ../src/graphicalClient/soccerview.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felix/git/ssl-vision/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/graphicalClient.dir/src/graphicalClient/soccerview.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphicalClient.dir/src/graphicalClient/soccerview.cpp.o -c /home/felix/git/ssl-vision/src/graphicalClient/soccerview.cpp

CMakeFiles/graphicalClient.dir/src/graphicalClient/soccerview.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphicalClient.dir/src/graphicalClient/soccerview.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felix/git/ssl-vision/src/graphicalClient/soccerview.cpp > CMakeFiles/graphicalClient.dir/src/graphicalClient/soccerview.cpp.i

CMakeFiles/graphicalClient.dir/src/graphicalClient/soccerview.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphicalClient.dir/src/graphicalClient/soccerview.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felix/git/ssl-vision/src/graphicalClient/soccerview.cpp -o CMakeFiles/graphicalClient.dir/src/graphicalClient/soccerview.cpp.s

CMakeFiles/graphicalClient.dir/src/graphicalClient/gltext.cpp.o: CMakeFiles/graphicalClient.dir/flags.make
CMakeFiles/graphicalClient.dir/src/graphicalClient/gltext.cpp.o: ../src/graphicalClient/gltext.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felix/git/ssl-vision/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/graphicalClient.dir/src/graphicalClient/gltext.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphicalClient.dir/src/graphicalClient/gltext.cpp.o -c /home/felix/git/ssl-vision/src/graphicalClient/gltext.cpp

CMakeFiles/graphicalClient.dir/src/graphicalClient/gltext.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphicalClient.dir/src/graphicalClient/gltext.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felix/git/ssl-vision/src/graphicalClient/gltext.cpp > CMakeFiles/graphicalClient.dir/src/graphicalClient/gltext.cpp.i

CMakeFiles/graphicalClient.dir/src/graphicalClient/gltext.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphicalClient.dir/src/graphicalClient/gltext.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felix/git/ssl-vision/src/graphicalClient/gltext.cpp -o CMakeFiles/graphicalClient.dir/src/graphicalClient/gltext.cpp.s

# Object files for target graphicalClient
graphicalClient_OBJECTS = \
"CMakeFiles/graphicalClient.dir/graphicalClient_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/graphicalClient.dir/src/graphicalClient/main.cpp.o" \
"CMakeFiles/graphicalClient.dir/src/graphicalClient/soccerview.cpp.o" \
"CMakeFiles/graphicalClient.dir/src/graphicalClient/gltext.cpp.o"

# External object files for target graphicalClient
graphicalClient_EXTERNAL_OBJECTS =

../bin/graphicalClient: CMakeFiles/graphicalClient.dir/graphicalClient_autogen/mocs_compilation.cpp.o
../bin/graphicalClient: CMakeFiles/graphicalClient.dir/src/graphicalClient/main.cpp.o
../bin/graphicalClient: CMakeFiles/graphicalClient.dir/src/graphicalClient/soccerview.cpp.o
../bin/graphicalClient: CMakeFiles/graphicalClient.dir/src/graphicalClient/gltext.cpp.o
../bin/graphicalClient: CMakeFiles/graphicalClient.dir/build.make
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libprotobuf.so
../bin/graphicalClient: /opt/pylon5/lib64/libFirmwareUpdate_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/libFirmwareUpdate_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libGCBase_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/libGCBase_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libGenApi_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/libGenApi_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libLog_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/libLog_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libMathParser_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/libMathParser_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libNodeMapData_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/libNodeMapData_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libXmlParser_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/libXmlParser_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libbxapi-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libbxapi.so
../bin/graphicalClient: /opt/pylon5/lib64/libgxapi-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libgxapi.so
../bin/graphicalClient: /opt/pylon5/lib64/liblog4cpp_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/liblog4cpp_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_bcon-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_bcon.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_camemu-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_camemu.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_gige-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_gige.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_usb-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_usb.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylonbase-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylonbase.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylonc-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylonc.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylonutility-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylonutility.so
../bin/graphicalClient: /opt/pylon5/lib64/libuxapi-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libuxapi.so
../bin/graphicalClient: libsslvision.a
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libQt5OpenGL.so.5.12.8
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libprotobuf.so
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libprotobuf.so
../bin/graphicalClient: /opt/pylon5/lib64/libFirmwareUpdate_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/libFirmwareUpdate_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libGCBase_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/libGCBase_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libGenApi_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/libGenApi_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libLog_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/libLog_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libMathParser_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/libMathParser_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libNodeMapData_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/libNodeMapData_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libXmlParser_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/libXmlParser_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libbxapi-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libbxapi.so
../bin/graphicalClient: /opt/pylon5/lib64/libgxapi-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libgxapi.so
../bin/graphicalClient: /opt/pylon5/lib64/liblog4cpp_gcc_v3_1_Basler_pylon.so
../bin/graphicalClient: /opt/pylon5/lib64/liblog4cpp_gcc_v3_1_Basler_pylon_v5_1.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_bcon-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_bcon.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_camemu-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_camemu.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_gige-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_gige.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_usb-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylon_TL_usb.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylonbase-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylonbase.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylonc-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylonc.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylonutility-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libpylonutility.so
../bin/graphicalClient: /opt/pylon5/lib64/libuxapi-5.2.0.so
../bin/graphicalClient: /opt/pylon5/lib64/libuxapi.so
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.4.2.0
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.4.2.0
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libopencv_core.so.4.2.0
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
../bin/graphicalClient: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
../bin/graphicalClient: CMakeFiles/graphicalClient.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/felix/git/ssl-vision/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../bin/graphicalClient"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/graphicalClient.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/graphicalClient.dir/build: ../bin/graphicalClient

.PHONY : CMakeFiles/graphicalClient.dir/build

CMakeFiles/graphicalClient.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/graphicalClient.dir/cmake_clean.cmake
.PHONY : CMakeFiles/graphicalClient.dir/clean

CMakeFiles/graphicalClient.dir/depend:
	cd /home/felix/git/ssl-vision/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/felix/git/ssl-vision /home/felix/git/ssl-vision /home/felix/git/ssl-vision/build /home/felix/git/ssl-vision/build /home/felix/git/ssl-vision/build/CMakeFiles/graphicalClient.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/graphicalClient.dir/depend

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
CMAKE_SOURCE_DIR = /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b

# Include any dependencies generated for this target.
include player/CMakeFiles/player.dir/depend.make

# Include the progress variables for this target.
include player/CMakeFiles/player.dir/progress.make

# Include the compile flags for this target's objects.
include player/CMakeFiles/player.dir/flags.make

player/CMakeFiles/player.dir/media_player.cpp.o: player/CMakeFiles/player.dir/flags.make
player/CMakeFiles/player.dir/media_player.cpp.o: ../player/media_player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object player/CMakeFiles/player.dir/media_player.cpp.o"
	cd /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b/player && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/player.dir/media_player.cpp.o -c /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/player/media_player.cpp

player/CMakeFiles/player.dir/media_player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/player.dir/media_player.cpp.i"
	cd /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b/player && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/player/media_player.cpp > CMakeFiles/player.dir/media_player.cpp.i

player/CMakeFiles/player.dir/media_player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/player.dir/media_player.cpp.s"
	cd /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b/player && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/player/media_player.cpp -o CMakeFiles/player.dir/media_player.cpp.s

player/CMakeFiles/player.dir/media_player.cpp.o.requires:

.PHONY : player/CMakeFiles/player.dir/media_player.cpp.o.requires

player/CMakeFiles/player.dir/media_player.cpp.o.provides: player/CMakeFiles/player.dir/media_player.cpp.o.requires
	$(MAKE) -f player/CMakeFiles/player.dir/build.make player/CMakeFiles/player.dir/media_player.cpp.o.provides.build
.PHONY : player/CMakeFiles/player.dir/media_player.cpp.o.provides

player/CMakeFiles/player.dir/media_player.cpp.o.provides.build: player/CMakeFiles/player.dir/media_player.cpp.o


player/CMakeFiles/player.dir/player.cpp.o: player/CMakeFiles/player.dir/flags.make
player/CMakeFiles/player.dir/player.cpp.o: ../player/player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object player/CMakeFiles/player.dir/player.cpp.o"
	cd /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b/player && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/player.dir/player.cpp.o -c /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/player/player.cpp

player/CMakeFiles/player.dir/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/player.dir/player.cpp.i"
	cd /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b/player && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/player/player.cpp > CMakeFiles/player.dir/player.cpp.i

player/CMakeFiles/player.dir/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/player.dir/player.cpp.s"
	cd /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b/player && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/player/player.cpp -o CMakeFiles/player.dir/player.cpp.s

player/CMakeFiles/player.dir/player.cpp.o.requires:

.PHONY : player/CMakeFiles/player.dir/player.cpp.o.requires

player/CMakeFiles/player.dir/player.cpp.o.provides: player/CMakeFiles/player.dir/player.cpp.o.requires
	$(MAKE) -f player/CMakeFiles/player.dir/build.make player/CMakeFiles/player.dir/player.cpp.o.provides.build
.PHONY : player/CMakeFiles/player.dir/player.cpp.o.provides

player/CMakeFiles/player.dir/player.cpp.o.provides.build: player/CMakeFiles/player.dir/player.cpp.o


# Object files for target player
player_OBJECTS = \
"CMakeFiles/player.dir/media_player.cpp.o" \
"CMakeFiles/player.dir/player.cpp.o"

# External object files for target player
player_EXTERNAL_OBJECTS =

player/libplayer.a: player/CMakeFiles/player.dir/media_player.cpp.o
player/libplayer.a: player/CMakeFiles/player.dir/player.cpp.o
player/libplayer.a: player/CMakeFiles/player.dir/build.make
player/libplayer.a: player/CMakeFiles/player.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libplayer.a"
	cd /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b/player && $(CMAKE_COMMAND) -P CMakeFiles/player.dir/cmake_clean_target.cmake
	cd /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b/player && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/player.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
player/CMakeFiles/player.dir/build: player/libplayer.a

.PHONY : player/CMakeFiles/player.dir/build

player/CMakeFiles/player.dir/requires: player/CMakeFiles/player.dir/media_player.cpp.o.requires
player/CMakeFiles/player.dir/requires: player/CMakeFiles/player.dir/player.cpp.o.requires

.PHONY : player/CMakeFiles/player.dir/requires

player/CMakeFiles/player.dir/clean:
	cd /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b/player && $(CMAKE_COMMAND) -P CMakeFiles/player.dir/cmake_clean.cmake
.PHONY : player/CMakeFiles/player.dir/clean

player/CMakeFiles/player.dir/depend:
	cd /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/player /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b/player /mnt/hgfs/ffmpeg/rtmp/rtmp-aduio-player/b/player/CMakeFiles/player.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : player/CMakeFiles/player.dir/depend

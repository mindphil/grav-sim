cmake_minimum_required(VERSION 3.10)
project(GravSimProject)

set(CMAKE_CXX_STANDARD 17)

# Add include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add library directories
link_directories(${CMAKE_SOURCE_DIR}/lib)

# Create executable
add_executable(opengl opengl.cpp glad.c)

# Link libraries
target_link_libraries(opengl glfw3 opengl32 gdi32)

# On Windows, copy DLL to output directory
if(WIN32)
    add_custom_command(TARGET opengl POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_SOURCE_DIR}/lib/glfw3.dll
        $<TARGET_FILE_DIR:opengl>)
endif()
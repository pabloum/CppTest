cmake_minimum_required(VERSION 3.26.3)

project(your_project_name)

# Add all your source files to a variable
set(SOURCES
    HolaMundo.cpp
)

# Add an executable target and link all the source files
add_executable(primero ${SOURCES})

# Specify the compiler and any compiler flags you need
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")

# Optionally, you can set the output directory for the compiled executable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
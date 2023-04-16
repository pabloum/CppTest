cmake_minimum_required(VERSION 3.26.3)

project(CppExperiment)

file(GLOB SOURCES "./*.cpp")
file(GLOB HEADERS "./*.h")
add_executable(executable ${SOURCES} ${HEADERS})

# Specify the compiler and any compiler flags you need
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")

# Optionally, you can set the output directory for the compiled executable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
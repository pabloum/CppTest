cmake_minimum_required(VERSION 3.26.3)

project(CppExperiment)

# file(GLOB HEADERS "./*.h")
# file(GLOB SOURCES "./*.cpp")
# add_executable(executable ${HEADERS} ${SOURCES})

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable
add_executable(exec)

# Add source files using target_sources
target_sources(exec
    PRIVATE
        Main.cpp
        ILevelCpp.h
        LevelFactory.h
        Enums/Levels.h
        BasicCpp/BasicCpp.h
        BasicCpp/BasicCpp.cpp
        AdvancedCpp/AdvancedCpp.h
        AdvancedCpp/AdvancedCpp.cpp
        ExpertCpp/ExpertCpp.h
        ExpertCpp/ExpertCpp.cpp
        Patterns_Idioms/PatternsIdioms.h
        Patterns_Idioms/PatternsIdioms.cpp
        Testing/TestingLevel.h
        Testing/TestingLevel.cpp
        OOP/Oop.h
        OOP/Oop.cpp
)

# Add header files using target_include_directories
target_include_directories(exec
    PRIVATE
        .
)

# Specify the compiler and any compiler flags you need
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")

# Optionally, you can set the output directory for the compiled executable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
cmake_minimum_required(VERSION 3.30)        # Minimum cmake version

# Project description
project(
    lesson4
    VERSION 1.0
    DESCRIPTION "First project"
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 17)                  # Set required C++ standart
set(CMAKE_CXX_STANDARD_REQUIRED ON)         # Check standart

set(CMAKE_BUILD_TYPE Release)               # Set type of build

add_executable(lesson4)                     


set(sources                                 # Add source code files
    main.cpp
)
target_sources(lesson4 PRIVATE ${sources})  # Sefine sources for compilation

# min cmake version needed
cmake_minimum_required(VERSION 3.10)

# defining project name
project(Temperature_Calculator)

# C++ standars
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# find the headers in this file
include_directories(${PROJECT_SOURCE_DIR}/include)

# source files (.cpp)
set(SOURCES
    src/main.cpp
    src/temp_functions.cpp
)

# create the executable. assign it a name.
add_executable(temp_exec ${SOURCES})

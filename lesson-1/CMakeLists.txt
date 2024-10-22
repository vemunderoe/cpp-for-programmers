cmake_minimum_required(VERSION 3.5)

project(lesson-1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -Wall -Wextra")

add_executable(tables tables.cpp)
add_executable(null-terminated-strings null-terminated-strings.cpp)
add_executable(simple-file-handling simple-file-handling.cpp)
add_executable(square square.cpp)

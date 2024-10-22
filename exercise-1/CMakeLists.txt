cmake_minimum_required(VERSION 3.5)

project(exercise-1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(temperatures-from-user-input temperatures-from-user-input.cpp)
add_executable(temperatures-from-file temperatures-from-file.cpp)

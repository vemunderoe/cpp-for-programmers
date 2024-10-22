cmake_minimum_required(VERSION 3.5)

project(exercise-8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(exercise-8 equal.cpp pair.cpp)

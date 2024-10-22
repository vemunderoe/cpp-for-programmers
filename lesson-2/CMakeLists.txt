cmake_minimum_required(VERSION 3.5)

project(lesson-2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(lesson-2 main.cpp)
add_executable(argumentTransfer argumentTransfer.cpp)

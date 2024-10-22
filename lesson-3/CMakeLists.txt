cmake_minimum_required(VERSION 3.5)

project(lesson-3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -Wall -Wextra")

add_executable(string-class string-class.cpp)
add_executable(surface surface.cpp)
add_executable(material_test material_test.cpp material.cpp covering.cpp)

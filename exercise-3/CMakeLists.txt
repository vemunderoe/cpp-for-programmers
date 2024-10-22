cmake_minimum_required(VERSION 3.5)

project(exercise-3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(circle_test circle_test.cpp circle.cpp)
add_executable(commodity_test commodity_test.cpp commodity.cpp)
add_executable(string_practice string_practice.cpp)

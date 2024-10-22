cmake_minimum_required(VERSION 3.5)

project(exercise-6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -Wall -Wextra")

find_package(Boost 1.54.0 COMPONENTS system REQUIRED)
include_directories(${Boost_INCLUDE_DIR})


add_executable(chess chess.cpp)

add_executable(webserver webserver.cpp)
target_link_libraries(webserver ${Boost_LIBRARIES})

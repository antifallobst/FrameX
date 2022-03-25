cmake_minimum_required(VERSION 3.21)
project(FrameX)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_library(FrameX library.cpp library.h)
add_executable(FrameX_Test main.cpp)
target_link_libraries(FrameX_Test FrameX)
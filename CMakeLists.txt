cmake_minimum_required(VERSION 3.8)
project(prostokat)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp rectangle.h rectangle.cpp)
add_executable(prostokat ${SOURCE_FILES})
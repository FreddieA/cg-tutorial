cmake_minimum_required(VERSION 3.1)
project(CG_Tutorial)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp tgaimage.cpp)
add_executable(CG_Tutorial ${SOURCE_FILES} )
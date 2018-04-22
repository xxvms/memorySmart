cmake_minimum_required(VERSION 3.10)
project(memorySmart)

set(CMAKE_CXX_STANDARD 17)

add_executable(memorySmart main.cpp Person.cpp Person.h Resource.h Resource.cpp)
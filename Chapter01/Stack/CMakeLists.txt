cmake_minimum_required(VERSION 3.10)
project(Stack)

set(CMAKE_CXX_STANDARD 17)

add_executable(Stack main.cpp Cell.cpp Cell.h Stack.cpp Stack.h)
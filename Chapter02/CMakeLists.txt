cmake_minimum_required(VERSION 3.12)
project(Chapter02)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(List)

add_executable(Chapter02 main.cpp
                List main.cpp)
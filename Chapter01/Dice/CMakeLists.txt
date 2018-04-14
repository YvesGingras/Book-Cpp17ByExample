cmake_minimum_required(VERSION 3.10)
project(Dice)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(Dice main.cpp)
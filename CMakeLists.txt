cmake_minimum_required(VERSION 3.10)
project(Book_Cpp17ByExample)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(Book_Cpp17ByExample main.cpp)
cmake_minimum_required(VERSION 3.12)
project(List)

set(CMAKE_CXX_STANDARD 17)


add_executable(List main.cpp
        Source/Cell.cpp
        Source/Cell.h
        Source/Iterator.cpp
        Source/Iterator.h
        Source/LinkedList.cpp
        Source/LinkedList.h
        )
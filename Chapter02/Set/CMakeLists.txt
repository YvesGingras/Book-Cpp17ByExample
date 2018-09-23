cmake_minimum_required(VERSION 3.12)
project(Set)

set(CMAKE_CXX_STANDARD 17)



add_executable(Set main.cpp
        Source/Set.h
        Source/Set.cpp
        Source/LinkedList.h
        Source/LinkedList.cpp
        Source/Cell.h
        Source/Cell.cpp
        Source/Iterator.h
        Source/Iterator.cpp)
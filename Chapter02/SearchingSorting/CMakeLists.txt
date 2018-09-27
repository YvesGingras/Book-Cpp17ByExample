cmake_minimum_required(VERSION 3.12)
project(SearchingSorting)

set(CMAKE_CXX_STANDARD 17)

add_executable(SearchingSorting main.cpp
        Source/Search.cpp Source/Search.h
        Source/Sort.cpp Source/Sort.h
        Source/Iterator.cpp Source/Iterator.h
        Source/LinkedList.cpp Source/LinkedList.h
        Source/Cell.cpp Source/Cell.h)
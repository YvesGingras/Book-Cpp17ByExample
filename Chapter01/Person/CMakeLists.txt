cmake_minimum_required(VERSION 3.10)
project(Person)

set(CMAKE_CXX_STANDARD 17)

add_executable(Person main.cpp
        Person.cpp Person.h
        Student.cpp Student.h
        Employee.cpp Employee.h)

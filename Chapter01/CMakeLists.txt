cmake_minimum_required(VERSION 3.10)
project(Chapter01)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_subdirectory(Dice)
add_subdirectory(Car)
add_subdirectory(Person)
add_subdirectory(Stack)
add_subdirectory(Queue)

add_executable(
        Chapter01 main.cpp
        Dice main.cpp
        Car main.cpp
        Person main.cpp
        Stack main.cpp
        Queue main.cpp
)

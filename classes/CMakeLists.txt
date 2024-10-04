cmake_minimum_required(VERSION 3.29)
project(classes)

set(CMAKE_CXX_STANDARD 20)

add_executable(classes main.cpp
        Person.cpp
        Person.h)

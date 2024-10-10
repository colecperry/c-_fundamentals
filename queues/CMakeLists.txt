cmake_minimum_required(VERSION 3.29)
project(queues)

set(CMAKE_CXX_STANDARD 20)

add_executable(queues main.cpp
        Queue.cpp
        Queue.h)

cmake_minimum_required(VERSION 4.3)
project(1437)

set(CMAKE_CXX_STANDARD 20)

add_executable(1437 main.cpp
        utils.h
        structDemos.h
        structDemos.cpp
        readDictionary.cpp
        readDictionary.h)

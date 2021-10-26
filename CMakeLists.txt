cmake_minimum_required(VERSION 3.20)
project(SENG1120_A3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SENG1120_A3
        makefile
        MechPart.cpp
        MechPart.h
        TreeHashTableDemo.cpp HTable.cpp HTable.h BSTree.cpp BSTree.h)

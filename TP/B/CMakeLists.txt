cmake_minimum_required(VERSION 3.10)

project(B)
set(SOURCE_EXE lib.cpp)
add_library(lib.h SHARED lib.cpp)
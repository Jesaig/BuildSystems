cmake_minimum_required(VERSION 3.10)

project(B)

set(HEADER lib.h)
set(SOURCE lib.cpp)
add_library(lib ${SOURCE} ${HEADER})
target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

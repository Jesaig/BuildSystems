cmake_minimum_required(VERSION 3.10)
project(C)

include_directories(${CMAKE_SOURCE_DIR}/A)
include_directories(${CMAKE_SOURCE_DIR}/B)
include_directories(${CMAKE_BINARY_DIR})
include_directories(${CMAKE_SOURCE_DIR})

add_executable(C main.cpp)
target_link_libraries(C lib)
add_dependencies(C indexGenerator)

include(CTest)

set(UPDATE_DISCONNECTED_IF_AVAILABLE "UPDATE_DISCONNECTED 1")

include(DownloadProject.cmake)
download_project(PROJ                googletest
                 GIT_REPOSITORY      https://github.com/google/googletest.git
                 GIT_TAG             master
                 ${UPDATE_DISCONNECTED_IF_AVAILABLE}
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

add_executable(CTest main_test.cpp tests.cpp)
target_link_libraries(CTest lib)
add_dependencies(CTest indexGenerator)
target_link_libraries(CTest gtest)

add_test(NAME    CTest 
        COMMAND  test)
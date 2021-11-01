cmake_minimum_required(VERSION 3.20)
project(distant_children)

set(CMAKE_CXX_STANDARD 20)

add_executable(distant_children main.cpp)
add_executable(allocation allocation.cpp)
add_executable(third third.cpp)
add_executable(fifth fifth.cpp)
add_executable(eighth eighth.cpp)

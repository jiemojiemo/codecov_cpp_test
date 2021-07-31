cmake_minimum_required(VERSION 3.10)

project(HelloCov)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")

add_subdirectory(src)
add_subdirectory(tests)
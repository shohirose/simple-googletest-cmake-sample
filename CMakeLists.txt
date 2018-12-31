cmake_minimum_required(VERSION 3.8)

project(SIMPLE_GOOGLETEST_CMAKE_SAMPLE CXX)

add_subdirectory(src)

enable_testing()
add_subdirectory(test)

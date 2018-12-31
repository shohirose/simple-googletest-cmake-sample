cmake_minimum_required(VERSION 3.8)

project(SIMPLE_GOOGLETEST_CMAKE_SAMPLE CXX)

add_library(mylib)
target_include_directories(mylib
  PUBLIC include/mylib
  )
target_compile_features(mylib
  PUBLIC cxx_std_11
  )
add_subdirectory(include)
add_subdirectory(src)

enable_testing()
add_subdirectory(test)

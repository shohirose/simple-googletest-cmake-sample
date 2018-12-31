add_library(mylib
  ClassA.cpp
  ClassB.cpp
  )
target_include_directories(mylib
  PUBLIC ${PROJECT_SOURCE_DIR}/include/mylib
  )
target_compile_features(mylib
  PUBLIC cxx_std_11
  )

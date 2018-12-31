#ifndef SIMPLE_GOOGLETEST_CMAKE_SAMPLE_INCLUDE_MYLIB_CLASS_A_H
#define SIMPLE_GOOGLETEST_CMAKE_SAMPLE_INCLUDE_MYLIB_CLASS_A_H

class ClassA {
 public:
  ClassA()  = default;
  ~ClassA() = default;
  int sumA1(int x, int y);
  int sumA2(int x, int y);
};

#endif

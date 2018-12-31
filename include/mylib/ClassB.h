#ifndef SIMPLE_GOOGLETEST_CMAKE_SAMPLE_INCLUDE_MYLIB_CLASS_B_H
#define SIMPLE_GOOGLETEST_CMAKE_SAMPLE_INCLUDE_MYLIB_CLASS_B_H

class ClassB {
 public:
  ClassB()  = default;
  ~ClassB() = default;
  int sumB1(int x, int y);
  int sumB2(int x, int y);
};

#endif

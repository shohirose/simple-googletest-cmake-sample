# What is this project?

This is an example of how to create unit tests using CMake and GoogleTest.
The codes here are refactored from the original ones presented in [this article (only in Japanese)](https://qiita.com/imasaaki/items/c56639c86627a8a950de).

# Requirements

- [CMake](https://cmake.org/)
- [GoogleTest](https://github.com/google/googletest)

# How to build and run tests

Type the following commands under the project root directory in the command line:

```terminal
mkdir build
cd build
cmake .. && make
ctest
```

If you have installed GoogleTest in a local directory, you have to tell cmake the path to the local directory. For example, if GoogleTest is installed under `$HOME/.local`, the command should be

```terminal
cmake -DGTEST_ROOT=$HOME/.local ..
```
# How to integrate with IDEs

## Visual Studio

Microsoft provides the procedures of how to integrate CMake projects with Visual Studio [here](https://docs.microsoft.com/en-us/cpp/ide/cmake-tools-for-visual-cpp?view=vs-2017).

## Code::Blocks

```terminal
mkdir build
cd build
cmake -G "CodeBlocks - Unix Makefiles" ..
```

## Xcode

```terminal
mkdir build
cd build
cmake -G Xcode ..
```

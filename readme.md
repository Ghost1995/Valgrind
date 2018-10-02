# Valgrind Exercise
[![Build Status](https://travis-ci.org/Ghost1995/Valgrind.svg?branch=master)](https://travis-ci.org/Ghost1995/Valgrind)
[![Coverage Status](https://coveralls.io/repos/github/Ghost1995/Valgrind/badge.svg?branch=master)](https://coveralls.io/github/Ghost1995/Valgrind?branch=master)
---

## Overview

Using Valgrind to find and correct errors.

## Standard install via command-line
```
git clone --recursive https://github.com/Ghost1995/Valgrind.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## Plugins

- CppChEclipse

    To install and run cppcheck in Terminal

    1. cd <path to repository>
    2. Run cppcheck --enable=all --std=c++11 -I include/ --suppress=missingIncludeSystem $( find . -name *.cpp | grep -vE -e "^./build/" -e "^./vendor/" )


- Google C++ Sytle

    To include and use Google C++ Style formatter in Terminal

    1. cd <path to repository>
    2. Run cpplint $( find . -name \*.h -or -name \*.cpp | grep -vE -e "^./build/" -e "^./vendor/" -e "^./docs/" -e "^./results" )

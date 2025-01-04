# Helloworld_cpp

In this project I get the basics set up for c++

## Setting up

* Started off `cmake` branch
* added `out` to `.gitignore`
* Experimenting with some data types
* added clang-format + extension `sudo apt install clang-format`

## Resources

* Cherno's [variables](https://www.youtube.com/watch?v=zB9RI8_wExo&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=8&pp=iAQB)


## Notes & the plan

1. Learned a bit about basic variable types
1. Changed version for CXX standard / compiler to use `std::format`
1. Set up `clang-format` on save with settings
1. Learned about functions and header files

## Oldschool stuff before #pragma once existed

```cpp
#ifndef _FREDO_H
#define _FREDO_H

#include <format>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fredo(vector<string> msg);

void f_integers_simple();

void f_integers_unsigned();

void f_char();

void f_decimals();

void f_bools();

#endif
```

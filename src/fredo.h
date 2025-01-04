// # "hash" is a pre-processor command
#pragma once  // tells compiler to only include this once in a single translation unit! (
              // ~single cpp file)
#include <format>  // < > to reference compile include paths
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

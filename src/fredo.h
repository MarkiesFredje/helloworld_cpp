// # "hash" is a pre-processor command
#pragma once  // tells compiler to only include this once in a single translation unit! (
              // ~single cpp file)
#include <cstring>
#include <format>  // < > to reference compile include paths
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fredo(vector<string> msg);
// int increment(int i);
void increment(int* value);
void increment(int& value);
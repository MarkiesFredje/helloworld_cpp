#include "fredo.h"  // " " relative path to current file

void fredo(vector<string> msg) {
  for (const string& word : msg) {
    cout << word << " ";
  }
  cout << endl;
}

int increment(int i) { return i + 1; }

// this seems convoluted shit, just use vars, return and assign
// perhaps these shenanigans will make sense later
// &variable references its address
// type* is a pointer
// type& is a reference
void increment(int* value) { (*value)++; }

// lets remake increment with a reference
void increment(int& value) { value++; }
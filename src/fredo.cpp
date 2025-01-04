#include "fredo.h"  // " " relative path to current file

void fredo(vector<string> msg) {
  for (const string& word : msg) {
    cout << word << " ";
  }
  cout << endl;
}

int increment(int i) { return i + 1; }
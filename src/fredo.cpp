#include "fredo.h"  // " " relative path to current file

void fredo(vector<string> msg) {
  for (const string& word : msg) {
    cout << word << " ";
  }
  cout << endl;
}

void f_integers_simple() {
  int variable = 8;
  cout << variable << endl;
  variable = -20;
  cout << variable << endl;
}

void f_integers_unsigned() {
  unsigned int variable = 3000000000;
  cout << "Getting a number higher then 2.2B now: " << variable << endl;
}

void f_char() {
  char variable = 'A';  // seems like " vs ' is real?
  cout << variable << endl;
}

void f_decimals() {
  float a = 12.3f;
  double b = 12.3;
  cout << "My float a: " << a << " stored in " << sizeof(a) << endl;
  cout << "My double b: " << b << endl;
}

void f_bools() {
  bool a = false;
  bool b = true;
  bool c = 0;  // false
  bool d = 1;  // true
  bool e = 5;  // true, only 0 is false

  string str_a = format("A is false: {}", a);
  string str_b = format("B is true: {}", b);
  string str_c = format("C is false: {}", c);
  string str_d = format("D is true: {}", d);
  string str_e = format("E is true: {}", e);

  cout << str_a << endl;
  cout << str_b << endl;
  cout << str_c << endl;
  cout << str_d << endl;
  cout << str_e << endl;
}

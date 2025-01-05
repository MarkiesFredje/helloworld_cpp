#include "fredo.h"  // the # is preprocessor statement, happens right before compilation

int main()  // the entry point, every application has this, int is the return type
{
  vector<string> msg{"Hello", "C++",     "World",
                     "from",  "VS Code", "and the C++ extension!"};

  // the start, using ref to modify variable
  int a = 5;
  int& ref = a;  // reference to an existing variable
  ref = 2;
  cout << "ref is now value (5 -> 2): " << ref << endl;

  // modify variable without returning
  int b = 5;
  increment(&b);
  cout << "b is now value (5 -> 6): " << b << endl;

  // using the reference
  int c = 5;
  increment(c);
  cout << "c is now value (5 -> 6): " << c << endl;

  // some shenanigans now
  int x = 5;
  int y = 8;

  int* reff = &x;  // pointer ref to memory address of a
  *reff = 2;
  reff = &y;
  *reff = 1;
  cout << "x (5) is now " << x << endl;
  cout << "y (8) is now " << y << endl;
}

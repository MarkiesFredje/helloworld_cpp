#include "fredo.h"  // the # is preprocessor statement, happens right before compilation

int main()  // the entry point, every application has this, int is the return type
{
  vector<string> msg{"Hello", "C++",     "World",
                     "from",  "VS Code", "and the C++ extension!"};

  vector<string> msg2{"Yo", "from", "my other", "branch!"};
  vector<string> msg3{"Fancy loop", "shizzle", "going", "on"};

  int x = 5;
  // bool compare = x == 6;

  cout << "=== IF statement" << endl;
  if (x == 6) {
    fredo(msg);
  } else {
    fredo(msg2);
  }

  cout << "=== FOR loop normal (5)" << endl;
  for (int i = 0; i < 5; i++) {
    fredo(msg);
  }

  cout << "=== FOR loop alternative (5)" << endl;
  // also possible to
  int a = 0;
  for (; a < 5; a = increment(a)) {
    fredo(msg2);
  }

  cout << "=== FOR loop another alternative (5)" << endl;
  a = 0;
  for (; a < 5;) {
    if (a == 4) {
      cout << "a is 4, so I break!" << endl;
      break;
    }
    if (a % 2 == 0 & a > 0) {
      cout << "a is even, so I skip" << endl;
      a++;
      continue;
    }
    fredo(msg3);
    a++;
  }

  cout << "=== While loop (3)" << endl;
  a = 0;
  while (a < 3) {
    cout << "Took a while eh?" << endl;
    a++;
  }

  cout << "=== Do while loop for completeness" << endl;
  a = 0;
  do {
    cout << "Do be rolling!" << endl;
  } while (a < 0);

  // pointers
  cout << "=== POINTERS" << endl;
  int var = 8;
  void* ptr = &var;  // type for pointers doenst matter, unless you write to it
  // we would not be able to write 10 to ptr because of type void!
  int* ptr_2 = &var;
  *ptr_2 = 10;
  cout << "var is now: " << var << endl;

  // reserving memory
  // one char is 1 byte
  char* buffer = new char[8];  // allocates 8 bytes
  memset(buffer, 0, 8);        // set 0 for 8 bytes long at my pointer
  char** ptr_f = &buffer;      // pointer to pointer
  cout << "dubble pointer ptr_f is " << ptr_f
       << " the memory address of the pointer to buffer" << endl;
  delete[] buffer;  // delete it again
}

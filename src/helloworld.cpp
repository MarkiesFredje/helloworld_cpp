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
}

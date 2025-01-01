#include "fredo.h" // the # is preprocessor statement, happens right before compilation

int main() // the entry point, every application has this, int is the return type
{
   vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

   fredo(msg);

   cout << "**** VARIABLES ****" << endl;
   cout << "------- INT" << endl;
   
   f_integers_simple();
}


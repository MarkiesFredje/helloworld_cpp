#include "fredo.h"

using namespace std;

void fredo(vector<string> msg)
{
   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
}

void f_integers_simple()
{
   int variable = 8;
   cout << variable << endl;
   variable = 20;
   cout << variable << endl;
}


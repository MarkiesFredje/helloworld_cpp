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


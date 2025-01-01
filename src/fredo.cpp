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
   variable = -20;
   cout << variable << endl;
}

void f_integers_unsigned()
{
   unsigned int variable = 3000000000;
   cout << "Getting a number higher then 2.2B now: " << variable << endl;
}

void f_char()
{
   char variable = 'A'; // seems like " vs ' is real?
   cout << variable << endl;
}

void f_decimals()
{
   float a = 12.3f;
   double b = 12.3;
   cout << "My float a: " << a << endl;
   cout << "My double b: " << b << endl;
}


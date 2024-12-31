#include <vector> // the # is preprocessor statement, happens right before compilation
#include <string>
#include <iostream> 

using namespace std;

int main() // the entry point, every application has this, int is the return type
{
   vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
}


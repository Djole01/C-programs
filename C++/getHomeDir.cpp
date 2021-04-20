/* getenv example: getting path */
#include <iostream>
#include <stdlib.h>     /* getenv */
#include <string>

using namespace std;

int main ()
{
  string pPath;
  string path2 = "/.config/GeorgePassWordManager";
  pPath = getenv ("HOME") + path2;
  
  cout << "The current path is: " + pPath << endl;
    
  return 0;
}

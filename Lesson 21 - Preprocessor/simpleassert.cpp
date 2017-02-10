// Listing 21.3 ASSERTS
#define DEBUG
#include <iostream>
using namespace std;

#ifndef DEBUG
     #define ASSERT(x)
#else
     #define ASSERT(x) \
         if (! (x)) \
         { \
             cout << "ERROR!! Assert " << #x << " failed\n"; \
             cout << " on line " << __LINE__  << "\n"; \
             cout << " in file " << __FILE__ << "\n";  \
         }
#endif

int main(int argc, char *argv[]){
	
     int x = 5;
     cout << "First assert: \n";
     ASSERT(x==5);
     cout << "\nSecond assert: \n";
     ASSERT(x != 5);
     cout << "\nDone.\n";
     return 0;
 }
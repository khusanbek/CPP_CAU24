// BreakTest.cpp
// break statement exiting a for statement.
#include <iostream>
using namespace std;

int main() {
   
   int count; // control variable also used after loop 
   
   for (count = 1; count <= 10; count++) { // loop 10 times
      if (count == 5) {
         break; // terminates loop if count is 5
      }

      cout << count << " ";
   }

   cout << "\nBroke out of loop at count = " << count << endl;
} 
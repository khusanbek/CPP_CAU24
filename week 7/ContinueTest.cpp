// ContinueTest.cpp
// continue statement terminating an iteration 
// of a for statement.
#include <iostream>
using namespace std;

int main() {
   
   for (int count = 1; count <= 10; count++) { // loop 10 times
      if (count == 5) {
         continue; // skip remaining code in loop body if count is 5
      }

      cout << count << " ";
   } 

   cout << "\nUsed continue to skip printing 5" << endl;
}
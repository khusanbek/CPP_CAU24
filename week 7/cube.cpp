
#include <iostream>
using namespace std;

int cube(int y); // function prototype

int main() {
   int x = 0;

   for (x = 1; x <= 10; x++) { // loop 10 times
      cout << cube(x) << endl; // calculate cube of x and output results
   }
}

// definition of function cube
int cube(int y) {
   return y * y * y;
}
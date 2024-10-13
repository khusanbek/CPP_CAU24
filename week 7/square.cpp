// square function used to demonstrate the function 
// call stack and activation records.
#include <iostream>
using namespace std;

int square(int); // prototype for function square

int main() {
   int a = 10; // value to square (local variable in main)

   cout << a << " squared: " << square(a) << endl; // display a squared
}

// returns the square of an integer
int square(int x) { // x is a local variable
   return x * x; // calculate square and return result
}
// maximum function with a function prototype.
#include <iostream>
#include <iomanip>
using namespace std;

int maximum(int x, int y, int z); // function prototype

int main() {
   cout << "Enter three integer values: ";
   int int1, int2, int3;
   cin >> int1 >> int2 >> int3;

   // invoke maximum
   cout << "The maximum integer value is: " 
      << maximum(int1, int2, int3) << endl;
}

// returns the largest of three integers   
int maximum(int x, int y, int z) {
   int maximumValue = x; // assume x is the largest to start

   // determine whether y is greater than maximumValue
   if (y > maximumValue) {
      maximumValue = y; // make y the new maximumValue
   }

   // determine whether z is greater than maximumValue
   if (z > maximumValue) {
      maximumValue = z; // make z the new maximumValue
   }

   return maximumValue;
}
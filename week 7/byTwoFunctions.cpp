// square function used to demonstrate the function 
// call stack and activation records.
#include <iostream>
using namespace std;

int byTwo(int); // prototype for function square
void byTwoPrint(int); // prototype for function square

int main() {
   
   int input;
   
   cout << "enter number to multiply to 2: ";
   cin >> input;
   
   cout << "Input * 2 (byTwo): " << byTwo(input) << endl;
   
   byTwoPrint(input);
   
   return 0;
}


int byTwo(int var) { 
   return var * 2; 
}

void byTwoPrint(int var) { 

   cout << "Input * 2 (byTwoPrint): " << var * 2 << endl;
}
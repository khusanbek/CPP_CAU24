// Compound-interest calculations with for.
#include <iostream>
#include <iomanip>
#include <cmath> // for pow function
using namespace std;

int main() {
	
   // set floating-point number format
   cout << fixed << setprecision(2);

   double principal = 1000.00; // initial amount before interest
   double rate = 0.05; // interest rate

   cout << "Initial principal: " << principal << endl;
   cout << "    Interest rate:    " << rate << endl;

   // display headers
   cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

   // calculate amount on deposit for each of ten years
   for (unsigned int year = 1; year <= 10; year++) {
	   
      // calculate amount on deposit at the end of the specified year
      double amount = principal * pow(1.0 + rate, year);

      // display the year and the amount
      cout << setw(4) << year << setw(20) << amount << endl;
   } 
}

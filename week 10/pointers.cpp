// C++ program to illustrate Pointers

#include <iostream>
using namespace std;

int main() 
{ 
	int var = 20;

	// declare pointer variable
	int* ptr;

	// note that data type of ptr and var must be same
	ptr = &var;

	// assign the address of a variable to a pointer
	cout << "Value at ptr = " << ptr << "\n";
	cout << "Value at var = " << var << "\n";
	cout << "Value at *ptr = " << *ptr << "\n";
	
	return 0;
}

// C++ program to illustrate Pointers

#include <iostream>
using namespace std;

int main() 
{ 
	// Declare an array
	int val[3] = { 5, 10, 20 };

	// declare pointer variable
	int* ptr;

	// Assign the address of val[0] to ptr
	// We can use ptr=&val[0];(both are same)
	ptr = val;
	cout << "Elements of the array are: ";
	cout << ptr[0] << " " << ptr[1] << " " << ptr[2];
	
	return 0;
}

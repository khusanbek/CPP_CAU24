/*
Ex1. Create program that takes two input,
and find out which one's value is greater 
than another.
*/
#include <iostream>

using namespace std;

int main() {
	
	int a = 0;
	int b = 0;
	
	cout << "Enter first number:";
	cin >> a;
	cout << "\nEnter second number:";
	cin >> b;
	
	cout << "\n\n";
	
	if(a > b) {
		
		cout << "\n" << a << " is greater than " << b;
		cout << "Hey there";
	}
	
	if(b > a)
		cout << "\n" << b << " is greater than " << a;
	
	
	
	return 0;
}
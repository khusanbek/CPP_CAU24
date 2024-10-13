// Comparing integers using if statements, 
// relational operators and equality operators.
#include <iostream>

using std::cout; 
using std::cin; 

int main() {
	
	int number1 = 0; 
	int number2 = 0;

	cout << "Enter two integers to compare: "; 
	cin >> number1 >> number2; 

	if (number1 == number2) {
		cout << number1 << " == " << number2 << "\n";
	}

	if (number1 != number2) {
		cout << number1 << " != " << number2 << "\n";
	}

	if (number1 < number2) {
		cout << number1 << " < " << number2 << "\n";
	}

	if (number1 > number2) {
		cout << number1 << " > " << number2 << "\n";
	}

	if (number1 <= number2) {
		cout << number1 << " <= " << number2 << "\n";
	}

	if (number1 >= number2) {
		cout << number1 << " >= " << number2 << "\n";
	}
	
	return 0;
} 
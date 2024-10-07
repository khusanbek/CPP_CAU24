// 1 to 10 random number
#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	int input1 = 0;
	int input2 = 0;
	int operation = -1;
	
	cout << "Enter first input: ";
	cin >> input1;
	
	cout << "Enter second input: ";
	cin >> input2;
	
	cout << "Choose operation:\n1 - '+'\n2 - '-'\n3 - '/'\n4 - '*'";
	cin >> operation;

	switch(operation) {
		case 1:
			cout << input1 << " + " << input2 << " = " << input1 + input2;
			break;
		case 2:
			cout << input1 << " - " << input2 << " = " << input1 - input2;
			break;
		case 3:
			cout << input1 << " / " << input2 << " = " << input1 / input2;
			break;
		case 4:
			cout << input1 << " * " << input2 << " = " << input1 * input2;
			break;
	}
	
	return 0;
}
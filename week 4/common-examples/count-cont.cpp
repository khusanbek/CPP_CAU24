// Solving the class-average problem 
// using counter-controlled iteration.
#include <iostream>
using namespace std;

int main() {
	
	int total = 0;
	int profitCounter = 1;
	int profit = 0;
	
	while (profitCounter <= 5) {
		
		cout << "Enter profit: "; 
		cin >> profit; 
		
		total = total + profit; // total += profit;
		profitCounter = profitCounter + 1; // profitCounter++;
	} 

	int average = total / 10;

	cout << "\nTotal of all 5 profit entered is " << total;
	cout << "\nAverage is " << average << "\n";
	
	return 0;
} 
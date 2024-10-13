// Randomly generate numbers between 1 and 100 for user to guess.
#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main() {

	int randomNumber = 0;
	
	unsigned int seed = static_cast<unsigned int>(time(nullptr));
	srand(seed);

	char response = 'n';

	do {
		// 100-1000 random number
		randomNumber = 100 + rand() % 901; // rand() % 901 -> 0-900

		cout << "I have a number between 100 and 1000.\n"
		<< "Can you guess my number?\n"
		<< "Please type your first guess." << endl << "? ";
		int guess;
		cin >> guess;
		
		while (guess != randomNumber) {
			
			if (guess < randomNumber) {
		
				cout << "Too low. Try again.\n? ";
			}
			else 
			{
				cout << "Too high. Try again.\n? ";
			}
			
			cin >> guess;
		}

		cout << "\nExcellent! It is " << randomNumber << "! You guessed the number!\n"
			<< "Would you like to play again (y or n)? ";
		cin >> response;

		cout << endl;
	} 
	while (response == 'y');

	return 0; // indicate successful termination
} 
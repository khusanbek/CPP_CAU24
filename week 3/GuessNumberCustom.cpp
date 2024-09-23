// Randomly generate numbers between 1 and 100 for user to guess.
#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int getNum();

bool isCorrect(int, int);

int main() {

	int randomNumber = 0;

	unsigned int seed = static_cast<unsigned int>(time(nullptr));
	srand(seed);

	char response = 'n';

	do {
		randomNumber = getNum();

		cout << "I have a number between 1 and 100.\n"
		<< "Can you guess my number?\n"
		<< "Please type your first guess." << endl << "? ";
		int guess;
		cin >> guess;

		while (!isCorrect(guess, randomNumber)) {
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

int getNum() {
	
	return 1 + rand() % 100;
}

bool isCorrect(int guess, int randNum) {
	
	if (guess == randNum) {
		
		return true;
	}

	if (guess < randNum) {
		
		cout << "Too low. Try again.\n? ";
	}
	else 
	{
		cout << "Too high. Try again.\n? ";
	}

	return false;
}
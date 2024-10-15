
// FuelCost Calculator with main function only

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

	bool CONTINUE = true;
	int const TANK_SIZE = 45,
			INITIAL_FUEL = 5, FUEL_PRICE = 10800,
				INITIAL_KM = 50, KM_PER_LITRE = 14;

	double fuelAvail = INITIAL_FUEL;
	int userInput = 0,
			fuelBuy = 0, totalFuelBought = 0,
				kmPassed = INITIAL_KM, kmPass = 0, kmToPass = KM_PER_LITRE * INITIAL_FUEL;

	while(CONTINUE) {

		cout << "\nMenu";
		cout << "\n(1) buy fuel: ";
		cout << "\n(2) km passed: ";
		cout << "\n(3) generate report: ";
		cout << "\n(-1) quit: ";
		cin >> userInput; // user input

		if(userInput == 1) {

			cout << "\nFuel in tank: ";
			printf("%.2f", fuelAvail);
			cout << "\nEnter fuel in litres: ";
			cin >> fuelBuy; // user input

			if(fuelBuy + fuelAvail > TANK_SIZE) {
				cout << "\nFuel CAN'T fit into tank.";
			}
			else {
				fuelAvail += fuelBuy;
				totalFuelBought += fuelBuy;
				kmToPass += fuelBuy * KM_PER_LITRE;
				cout << "Fuel in tank: ";
				printf("%.2f\n", fuelAvail);
			}
		}
		else if(userInput == 2) {

			cout << "\nCurrent km passed: " << kmPassed;
			cout << "\nEnter km passed: ";
			cin >> kmPass; // user input

			if(kmToPass - kmPass  < 0) {
				cout << "\nFuel ISN'T enough for " <<
						kmPass << " to pass. Please buy more fuel to drive.";
			}
			else {
				kmPassed += kmPass;
				kmToPass -= kmPass;
				fuelAvail -= (double) kmPass / KM_PER_LITRE;
			}
		}
		else if(userInput == 3) {

			cout << "\n~~~Report of gas usage~~~";
			cout << "\nFuel in tank (ltr): ";
			printf("%.2f\n", fuelAvail);
			cout <<	", tank capacity: " + TANK_SIZE;
			cout << "\nWith fuel "; printf("%.2f\n", fuelAvail);
			cout <<	" (ltr) approx. km to pass: " + kmToPass;
			cout << "\nKm passed: " << kmPassed;
			cout << "\nFuel purchased (ltr): " << totalFuelBought;
			cout << "\nFuel price per (ltr): " << FUEL_PRICE;
			cout << "\nTotal fuel bought price: " << totalFuelBought * FUEL_PRICE;
			cout << "\n+++Report of gas usage+++\n";

		} else if(userInput == -1) {

			CONTINUE = false;
		}
	}
}

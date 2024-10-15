
// Code to find and replaces
// "String.format("%.2f", fuelAvail)" find suitable Java code in C++ 
// and replace in all lines below


#include <iostream>
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

		cout << "Menu";
		cout << "\n(1) buy fuel: ";
		cout << "\n(2) km passed: ";
		cout << "\n(3) generate report: ";
		cout << "(-1) quit: ";
		cin >> userInput; // user input

		if(userInput == 1) {

			cout << "\nFuel in tank: " << String.format("%.2f", fuelAvail);
			cout << "\nEnter fuel in litres: ";
			cin >> fuelBuy; // user input

			if(fuelBuy + fuelAvail > TANK_SIZE) {
				cout << "\nFuel CAN'T fit into tank.";
			}
			else {
				fuelAvail += fuelBuy;
				totalFuelBought += fuelBuy;
				kmToPass += fuelBuy * KM_PER_LITRE;
				cout << "Fuel in tank: " << String.format("%.2f", fuelAvail) + "\n";
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

			cout << "~~~Report of gas usage~~~";
			cout << "Fuel in tank (ltr): " << String.format("%.2f", fuelAvail) <<
									", tank capacity: " + TANK_SIZE;
			cout << "With fuel " << String.format("%.2f", fuelAvail) << 
				" (ltr) approx. km to pass: " + kmToPass;
			cout << "Km passed: " << kmPassed;
			cout << "Fuel purchased (ltr): " << totalFuelBought;
			cout << "Fuel price per (ltr): " << FUEL_PRICE;
			cout << "Total fuel bought price: " << totalFuelBought * FUEL_PRICE;
			cout << "+++Report of gas usage+++\n";

		} else if(userInput == -1) {

			CONTINUE = false;
		}
	}
}


#include <iostream>
#include <string>

using namespace std;

class Concrete {
	
private:
	int cementAmount;
	int sandAmount;
	int waterAmount;
	
public:
	Concrete() {
		cementAmount = 0;
		sandAmount = 0;
		waterAmount = 0;
	}
	
	Concrete(int cA, int sA, int wA) {
		cementAmount = cA;
		sandAmount = sA;
		waterAmount = wA;
	}
	
	void setCementAmount(int cA) {
		cementAmount = cA;
	}
	
	int getCementAmount() {
		return cementAmount;
	}
	
	void setSandAmount(int sA) {
		sandAmount = sA;
	}
	
	int getSandAmount() {
		return sandAmount;
	}
	
	void setWaterAmount(int wA) {
		waterAmount = wA;
	}
	
	int getWaterAmount() {
		return waterAmount;
	}
	
	void printInfo() {
		cout << " - - - Concrete - - -\n";
		cout << " Cement: " << getCementAmount();
		cout << "\n Sand: " << getSandAmount();
		cout << "\n Water: " << getWaterAmount();
		cout << " \n - - - Concrete - - -\n\n";
	}
};
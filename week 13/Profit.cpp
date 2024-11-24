// C++ Program to Demonstrate
// Operator Overloading
#include <iostream>
using namespace std;

class Profit {

private:
    string from;
	int amount;

public:
    Profit(string fr, int amt)
    {
        setFrom(fr);
		setAmount(amt);
		
		printInfo();
    }
	
	void setFrom(string fr) {
		
		from = fr;
	}
	
	string getFrom() {
		
		return from;
	}
	
	void setAmount(int amt) {
		
		amount = amt;
	}
	
	int getAmount() {
		
		return amount;
	}
	
    int operator + (Profit const& profObj)
    {
        return amount + profObj.amount;
    }
	
	int operator - (Profit const& profObj)
    {
        return amount - profObj.amount;
    }
	
	int operator * (Profit const& profObj)
    {
        return amount * profObj.amount;
    }
	
	int operator / (Profit const& profObj)
    {
        return amount / profObj.amount;
    }
	
	void printInfo() {
		
		cout << " ~ ~ Profit ~ ~";
		cout << "\n From: " << from;
		cout << "\n Amount: " << amount;
		cout << "\n ~ ~ Profit ~ ~\n\n";
	}
};

int main()
{
	Profit prt1("shoes", 120);
	Profit prt2("shirts", 70);
	
	int sum 		= prt1 + prt2;
	int subtract 	= prt1 - prt2;
	int multip 		= prt1 * prt2;
	int divide 		= prt1 / prt2;
	
	cout << " Summation: " << sum;
	cout << "\n Subtract: " << subtract;
	cout << "\n Multiplication: " << multip;
	cout << "\n Division: " << divide;
	
	return 0;
}
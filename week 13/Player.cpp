// C++ Program to Demonstrate
// Operator Overloading
#include <iostream>
using namespace std;

class Player {

private:
    string name;
	int money;
	int age;

public:
    Player(string nm, int mn, int ag)
    {
        setName(nm);
		setMoney(mn);
		setAge(ag);
		
		printInfo();
    }
	
	void setName(string nm) {
		
		name = nm;
	}
	
	string getName() {
		
		return name;
	}
	
	void setMoney(int mn) {
		
		money = mn;
	}
	
	int getMoney() {
		
		return money;
	}
	
	void setAge(int ag) {
		
		age = ag;
	}
	
	int getAge() {
		
		return age;
	}
	
    int operator + (Player &plrObj)
	{
		int fee = 0;
		
		if(age > 16)
		{
			money -= 10;
			fee = 10;
		}
		
		if(plrObj.age > 16)
		{
			plrObj.money -= 10;
			fee += 10;
		}
		
		return fee;
	}
	
	void printInfo() {
		
		cout << " ~ ~ Player ~ ~";
		cout << "\n Name: " << getName();
		cout << "\n Money: " << getMoney();
		cout << "\n Age: " << getAge();
		cout << "\n ~ ~ Player ~ ~\n\n";
	}
};

int main()
{
	Player ply1("Jim", 20, 20);
	Player ply2("Cass", 25, 45);
	Player ply3("Jack", 70, 52);
	Player ply4("Simon", 20, 15);
	
	int rentFee1	= ply1 + ply2;
	int rentFee2	= ply3 + ply4;
	int totalRent 	= rentFee1 + rentFee2;
	
	cout << " *** Total rent: " << totalRent << " ***\n\n";
	
	ply1.printInfo();
	ply2.printInfo();
	ply3.printInfo();
	ply4.printInfo();
	
	return 0;
}

#include <iostream>

using namespace std;

class Student {
	
private:
	int id;
	string name;
	int age;
		
public:
	Student(int idIn, string nameIn, int ageIn) {
		
		setId(id);
		setName(nameIn);
		setAge(ageIn);
	}
	
	void setId(int idIn) {
		
		id = idIn;
	}
	
	int getId() {
		
		return id;
	}
	
	void setName(string nameIn) {
		
		name = nameIn;
	}
	
	string getName() {
		
		return name;
	}
	
	void setAge(int idAge) {
		
		age = idAge;
	}
	
	int getAge() {
		
		return age;
	}
	
	void printInfo() {
		
		cout << " ~ ~ Student ~ ~\n";
		cout << " ID: " << getId();
		cout << "\n Name: " << getName();
		cout << "\n Age: " << getAge();
		cout << "\n ~ ~ Student ~ ~\n\n";
	}
};

#include <iostream>
#include <string>

using namespace std;

class Block : public Concrete {
	
private:
	int width;
	int height;
	int length;
		
public:
	Block() :
		Concrete() {
		
		width = 0;
		height = 0;
		length = 0;
	}
	
	Block(int cA, int sA, int wA, int w, int h, int l) :
		Concrete(cA, sA, wA) {
		
		width = w;
		height = h;
		length = l;
	}
	
	void setWidth(int w) {
		width = w;
	}
	
	int getWidth() {
		return width;
	}
	
	void setHeight(int h) {
		height = h;
	}
	
	int getHeight() {
		return height;
	}
	
	int getLength() {
		return length;
	}
	
	void setLength(int l) {
		length = l;
	}
	
	void printInfo() {
		cout << " - - - Block - - -\n";
		cout << " Cement: " << getCementAmount();
		cout << "\n Sand: " << getSandAmount();
		cout << "\n Water: " << getWaterAmount();
		cout << "\n\n Width: " << getWidth();
		cout << "\n Height: " << getHeight();
		cout << "\n Length: " << getLength();
		cout << " \n - - - Block - - -\n\n";
	}
};
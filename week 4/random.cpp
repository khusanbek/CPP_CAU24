// 1 to 10 random number
#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int getNum();

int main(){
	
	int num;
	
	unsigned int seed = static_cast<unsigned int>(time(nullptr));
	srand(seed);
	
	for(int i = 0; i < 5; i++) {
		
		num = getNum();
		cout << num << " ";
	}
	
	return 0;
}

int getNum() {
	
	return 1 + rand() % 10;
}

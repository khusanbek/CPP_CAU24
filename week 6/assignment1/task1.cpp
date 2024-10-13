// 1 to 10 random number
#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	int num;
	
	unsigned int seed = static_cast<unsigned int>(time(nullptr));
	srand(seed);
	
	for(int i = 0; i < 5; i++) {
		
		// 10-30 random number
		num = 10 + rand() % 21; // rand() % 21 -> 0-20 
		cout << num << " ";
	}
	
	return 0;
}
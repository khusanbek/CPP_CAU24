
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> myVector = {1, 2, 3, 4, 5};

	cout << myVector[0] << endl;
	cout << myVector.at(0);
	
	cout << endl << endl;
	
	cout << myVector[1] << endl;
	cout << myVector.at(1);
	
	cout << endl << endl;
	
	cout << myVector[3] << endl;
	cout << myVector.at(4);
	
	cout << endl;
	
	return 0;
}
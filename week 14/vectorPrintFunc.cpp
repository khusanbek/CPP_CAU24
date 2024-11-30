
#include <iostream>
#include <vector>

using namespace std;

void printV(vector<int> &v) {
	
	// traverse the vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {

    // initializer list
    vector<int> myVector = {4, 7, 4, 3, 12, 14, 55, 13};

    printV(myVector);

    return 0;
}
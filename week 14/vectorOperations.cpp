
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
    vector<int> v = {1, 2, 3};
  
	// Inserting 5 at the back
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);

	for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
	
	cout << endl;

	v.pop_back();
	v.pop_back();
	v.pop_back();
	
	for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
	
	cout << endl;
	
	cout << "Vector size: " << v.size() << endl;
	
	v.resize(5);
	cout << "Vector size: " << v.size() << endl;
	
	cout << "Index at 3 = " << v.at(3) << endl;
	cout << "Front " << v.front() << endl;
	cout << "Back " << v.back() << endl << endl;
	
	v.push_back(4);
	
	for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
	
	cout << endl;
	
	cout << "Front " << v.front() << endl;
	cout << "Back " << v.back() << endl;
	cout << "Vector size: " << v.size() << endl;
	
    return 0;
}
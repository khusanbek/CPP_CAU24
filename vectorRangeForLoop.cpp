
#include <iostream>
#include <vector>

using namespace std;

int main() {

  // initializer list
  vector<int> vectorVal = {1, 2, 3, 4, 5};

  cout << "vector content: ";

  // ranged loop traversing
  for (int v : vectorVal) {
    cout << v << "  ";
  }

  return 0;
}
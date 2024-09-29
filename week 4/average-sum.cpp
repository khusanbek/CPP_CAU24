// average.cpp
// Computing the sum and average of numbers
#include <iostream>
using namespace std;

int main()
{
	int x, count = 0;
	float sum = 0.0;
	
	cout << "Please enter some integers:\n"
	"(Break with any letter)"
	<< endl;
	
	while( cin >> x )
	{
		sum += x;
		++count;
	}
	
	cout << "The sum of the numbers: " << sum
		<< "\nThe average of the numbers: "
			<< sum / count << endl;
	
	return 0;
}
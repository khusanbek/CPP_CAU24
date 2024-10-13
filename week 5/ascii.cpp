// ascii.cpp : To output an ASCII Code Table
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int ac = 32; // To begin with ASCII Code 32
	
	// without control characters.
	while( true )
	{ 
		cout << "\nCharacter Decimal Hexadecimal\n\n";
		int upper;
		
		for( upper = ac + 20; ac < upper && ac < 256; ++ac )
		cout << " " << (char) ac // as character
			<< setw(10) << dec << ac
				<< setw(10) << hex << ac << endl;
		
		if( upper >= 256 ) break;
		
		cout <<"\nGo on -> hit Enter,Stop -> Q||q + hit Enter";
		
		char answer;
		cin.get(answer);
		
		if( answer == 'q' || answer == 'Q' )
			break;
		
		cin.sync(); // Clear input buffer
	}
	
	return 0;
}
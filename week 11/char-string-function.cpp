// https://www.programiz.com/cpp-programming/strings

#include <iostream>

using namespace std;

void displayChar(char *);
void displayString(string);

int main()
{
    string strString;
    char strChar[100];

    cout << "Enter a string: ";
    getline(cin, strString);

    cout << "Enter another string: ";
    cin.get(strChar, 100, '\n');

    displayString(strString);
    displayChar(strChar);
    
	return 0;
}

void displayChar(char s[])
{
    cout << "Entered char array is: " << s << endl;
}

void displayString(string s)
{
    cout << "Entered string is: " << s << endl;
}
#include <iostream>
#include <string> // This is a new thing we are using.

using namespace std;

int main()
{

	// String = a class
	// Value (the variable) is an Object
	// int = a primitive type

	string text1 = "Hello ";
	string text2 = "Fred";
	string text3 = text1 + text2; 
	
	// In text3 we are concatinating = joining things together.

	cout << text1 << text2 << endl; // Can do both on 1 line.
	cout << text2 << endl;
	cout << text3 << endl;
	cout << endl << endl;

	string input;
	
	cout << "Please enter your name: " << flush;
	cin >> input;
	cout << endl;
	cout << "Your name is: " << input << endl;

	int value;
	cout << endl;
	cout << "Please enter your favourite number: " << flush;
	cin >> value;
	cout << endl;
	cout << "Your favourite number is: " << value << endl;
	cout << endl;
	cout << "Hooray! Now I know your name and favourite number, now what to do with this information..." << endl;
	cout << endl;

	int iTemp;
	cin >> iTemp;

	return(0);
}
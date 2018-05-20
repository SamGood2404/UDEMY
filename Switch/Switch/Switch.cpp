#include <iostream>
#include <string>

using namespace std; 

// Switch statement lets you choose between values... if, else if, else...

int main()
{
	// const int number = 4... Can case as number if you use a const int...
	int value = 5; // Can use "char" as well... char = int type...
	
	switch(value)
	{
	case 4: // Cases CANNOT be variables e.g. int number = 4... case number
		cout << "Value is 4." << endl;
		cout << endl;
		break;							// DO NOT FORGET THE BREAK STATEMENTS!

	case 5:
		cout << "Value is 5." << endl;
		cout << endl;
		break;							// DO NOT FORGET THE BREAK STATEMENTS!

	case 6:
		cout << "Value is 6." << endl;
		cout << endl;
		break;							// DO NOT FORGET THE BREAK STATEMENTS!

	default:							// Does this if no cases are True... 
		cout << "Unrecognized value." << endl;
		cout << endl;
	}

	int iTemp;
	cin >> iTemp;

	return(0);
}
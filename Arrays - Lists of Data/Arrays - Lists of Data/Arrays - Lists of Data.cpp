#include <iostream>
#include <string>

using namespace std;

int main()
{

	// An Array is a list of values contined in a single variable...

	// NOTICE!!! WE ARE USING SQAURE BRACKETS HERE!!!

	cout << "Array of Integers" << endl;
	cout << "=================" << endl;
	cout << endl;

	int values[3]; 

	values[0] = 88;
	values[1] = 123;
	values[2] = 7;

	// BAD STUFF BELOW

	cout << "This is wrong and what happens: " << values[3] << endl;
	cout << endl;
	cout << "Line 23 in code produces..." << values[3] << endl;
	cout << endl;

	cout << "Correct stuff below..." << endl;
	cout << "======================" << endl;
	cout << endl;

	// BAD STUFF ABOVE

	cout << "Value 0 = " << values[0] << endl;
	cout << endl;

	cout << "Value 1 = " << values[1] << endl;
	cout << endl;

	cout << "Value 2 = " << values[2] << endl;
	cout << endl;

	cout << "Array of Doubles" << endl;
	cout << "=================" << endl;
	cout << endl;

	double numbers[4] = {4.5, 2.3, 7.2, 8.1};

	// Above we used curly brackets {} to initialize multiple numbers...

	cout << "Double 0 = " << numbers[0] << endl;
	cout << endl;

	for (int i = 0; i < 4; i++) // Numbering always starts at 0...
	{
		//numbers[i] = 77; This changes all numbers outputted to 77 when they load.

		cout << "Element at index " << i << ": " << numbers[i] << endl;
		cout << endl;
	}

	// How to initialize an Array with 0 values...

	cout << "Initializing with 0 Values" << endl;
	cout << "==========================" << endl;
	cout << endl;

	int numberArray[8] = {};

	for (int i = 0; i < 8; i++) 
	{
	
		cout << "Element at index " << i << ": " << numberArray[i] << endl;
		cout << endl;
	}

	// Array of Strings...

	// Array of strings can have "" in its intitialization...

	string texts[] = { "Apple", "Banana", "Orange" };

	cout << "Initializing with Strings" << endl;
	cout << "=========================" << endl;
	cout << endl;

	for (int i = 0; i < 3; i++)
	{

		cout << "Element at index " << i << ": " << texts[i] << endl;
		cout << endl;
	}

	int iTemp;
	cin >> iTemp;

	return(0);
}
#include <iostream>
#include <string>

using namespace std;



	// Conditions made up of more than 1 clause.

	/*
	* == equality test
	* != not equals
	* < less than
	* > greater than
	* <= less than or equal to
	* >= greater than or equal to
	*/

int main()
{
//
	int value1 = 7;
	int value2 = 4;

	if (value1 < 8)
	{
		cout << "Condition 1: True" << endl;
		cout << endl;
	}
	else
	{
		cout << "Condition 1: False" << endl;
		cout << endl;
	}
//
	if (value2 > 5)
	{
		cout << "Condition 2: True" << endl;
		cout << endl;
	}
	else
	{
		cout << "Condition 2: False" << endl;
		cout << endl;
	}
//
	if (value1 == 7 && value2 == 4) // C++ Reads left to right...
	{
		cout << "Condition 3: True" << endl;
		cout << endl;
	}
	else
	{
		cout << "Condition 3: False" << endl;
		cout << endl;
	}
//
	if (value1 == 7 || value2 != 4) // || = OR ... either one makes it = true.
	{
		cout << "Condition 4: True" << endl;
		cout << endl;
	}
	else
	{
		cout << "Condition 4: False" << endl;
		cout << endl;
	}
//
	if ((value2 != 8 && value1 == 7) || value1 < 10) // Example of it becoming
												    // complex as it would be
												   // when we don't hard code.
	{
		cout << "Condition 5: True" << endl;
		cout << endl;
	}
	else
	{
		cout << "Condition 5: False" << endl;
		cout << endl;
	}
//
	bool condition1 = (value2 != 8) && (value1 == 7); // Bool stores as true or false.
	
	cout << condition1 << endl;
	cout << endl;
	
	cout << "1 = True" << endl;
	cout << endl;
	
	cout << "0 = False" << endl;
	cout << endl;

	bool condition2 = (value1 < 10);

	cout << condition2 << endl;
	cout << endl;
//
	if (condition1 || condition2)									
	{
		cout << "Condition 6: True" << endl;
		cout << endl;
	}
	else
	{
		cout << "Condition 6: False" << endl;
		cout << endl;
	}

	int iTemp;
	cin >> iTemp;

	return(0);
}
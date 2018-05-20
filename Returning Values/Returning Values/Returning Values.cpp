#include <iostream>

using namespace std;

// Creating a dedicated function that gets input from the user...

void Show_Menu()
{
	cout << "1. Search" << endl;
	cout << endl;
	cout << "2. View Record" << endl;
	cout << endl;
	cout << "3. Quit" << endl;
	cout << endl;
}

int Process_Selection() // Changed void (returns nothing) to int (return integer)
{
	cout << "Enter Selection > " << flush;

	int input; // the returns from line 32 is this variable...
	cin >> input;
	cout << endl;

	return input;

	// This code is now self-contained from main...
}

	int main()
{

	Show_Menu();
	int Selection = Process_Selection(); // setting input to whatever Process_Selectiojn returns...


	switch (Selection)
	{
	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Viewing..." << endl;
		break;
	case 3:
		cout << "Quitting..." << endl;
		break;
	default:
		cout << "Please select an item from the menu." << endl;
	}

	int iTemp;
	cin >> iTemp;

	return(0);
}
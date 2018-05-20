#include <iostream>

using namespace std;

// Void means not returning any data to the calling function, meaning main.
// Void can be called from anywhere now because it is its own function.
// Cannot put Show_Menu at the bottom of the code because the compiler reads
// from the top down.
// Can have multiple functions

void Show_Menu() 
{
	cout << "1. Search" << endl;
	cout << endl;
	cout << "2. View Record" << endl;
	cout << endl;
	cout << "3. Quit" << endl;
	cout << endl;
}

void Process_Selection()
{
	cout << "Enter Selection > " << flush;

	int input;
	cin >> input;
	cout << endl;

	switch (input)
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

}
 
int main()
{

	Show_Menu();
	Process_Selection();


	int iTemp;
	cin >> iTemp;

	return(0);
}
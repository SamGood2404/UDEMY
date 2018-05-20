#include <iostream>

using namespace std;


void Show_Menu()
{
	cout << "1. Search" << endl;
	cout << endl;
	cout << "2. View Record" << endl;
	cout << endl;
	cout << "3. Quit" << endl;
	cout << endl;
}

int Get_Input() 
{
	cout << "Enter Selection > " << flush;

	int input; 
	cin >> input;
	cout << endl;

	return input;
	
}

void Process_Selection(int Options) // This is called passing a variable
{
	switch (Options) 
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
	int Selection = Get_Input(); // This is a different variable from line 28
	Process_Selection(Selection); // This is called passing a variable

	int iTemp;
	cin >> iTemp;

	return(0);
}
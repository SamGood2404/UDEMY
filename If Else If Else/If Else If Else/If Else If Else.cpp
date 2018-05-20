#include <iostream>

using namespace std;

int main()
{

	cout << "1. \tAdd New Record." << endl;
	cout << "2. \tDelete Record." << endl;
	cout << "3. \tView Record." << endl;
	cout << "4. \tSearch Record." << endl;
	cout << "5. \tQuit..." << endl;
	cout << endl;
	
	cout << "Enter your selection > " << flush;

	int value;
	cin >> value;

	if (value == 1)
	{
		cout << "Adding New Record..." << endl;
		cout << endl;
	}
	else if (value == 2)
	{
		cout << "Deleting Record..." << endl;
		cout << endl;
	}
	else if (value == 3)
	{
		cout << "Viewing Record..." << endl;
		cout << endl;
	}
	else if(value == 4)
	{
		cout << "Searching Record..." << endl;
		cout << endl;
	}
	else if (value == 5)
	{
		cout << "Quitting Record..." << endl;
		cout << endl;
	}
	else(value != 1, 2, 3, 4, 5);
	{
		cout << "Please enter a value between 1 and 5" << endl;
		cout << endl;
	}

	int iTemp;
	cin >> iTemp;

	return(0);
}
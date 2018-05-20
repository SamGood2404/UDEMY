#include <iostream>
#include <string>

using namespace std;

int main()
{

	cout << "1.\tAdd New Record." << endl;
	cout << endl;

	cout << "2.\tDelete Record." << endl;
	cout << endl;

	cout << "3.\tView Record." << endl;
	cout << endl;

	cout << "4.\tSearch Record." << endl; 
	cout << endl;

	cout << "5.\tQuit Record." << endl;
	cout << endl;

	cout << "Enter your selection > " << flush;

	int value;
	cin >> value;
	cout << endl;

	// This is a test to see if entering "5" outputs Quitting. It Does
	//if (value == 5)
	//{
	//	cout << "Application Quitting..." << endl;
	//	cout << endl;
	//}

	if (value < 3)
	{
		cout << "Authentication Required!" << endl;
		cout << endl;
	}
	else
	{
		cout << "Authentication Complete!" << endl;
		cout << endl;
	}

	if (value == 5)
	{
		cout << "Application Quitting..." << endl;
		cout << endl;
	}
	else
	{
		cout << "Not Quitting..." << endl;
		cout << endl;
	}


	int iTemp;
	cin >> iTemp;
	
	return(0);
}
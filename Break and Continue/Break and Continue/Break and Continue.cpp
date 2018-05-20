#include <iostream>
#include <string>

using namespace std;

int main()
{
	// break jumps immediately out of a loop.
	//useful for extra condition 
	/*
	for (int i = 0; i < 5; i++)
	{
		cout << "i is: " << i << endl;
		cout << endl;

		if (i == 3) 
		{
			break; !!!THIS IS BREAK!!!
		}
		cout << "Looping..." << endl;
		cout << endl;
	}

	cout << "Program Quitting..." << endl;
	cout << endl;

	*/


	// Continue means do not execute any statements after continue
	// It will still carry on the rest of the code.
	// Will continue the loop after that 1 continue.
	
	/*
	for (int i = 0; i < 5; i++)
	{
		cout << "i is: " << i << endl;
		cout << endl;

		if (i == 3)
		{
			continue;
		}
		cout << "Looping..." << endl;
		cout << endl;
	}

	cout << "Program Quitting..." << endl;
	cout << endl;

	// const means the value cannot be reassigned...
	// const usually declared near top of file to keep them all together...

	*/

	// We are going to simplify the password program by using BREAK //

	const string password = "Hello";

	string input;

	do
	{
		cout << "Enter your password > " << flush;

		cin >> input;
		cout << endl;

		if (input == password)
		{
			break;
		}
		else
		{
			cout << "Access Denied" << endl;
			cout << endl;
		}

	} while (true);

	cout << "Access Granted" << endl;
	cout << endl;
	cout << "Program Quitting..." << endl;
	cout << endl;

	int iTemp;
	cin >> iTemp;

	return(0);
}
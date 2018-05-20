#include <iostream>
#include <string>

using namespace std;

int main()
{

	// const means the value cannot be reassigned...
	// const usually declared near top of file to keep them all together...


	const string password = "Hello";

	string input;

	do
	{
		cout << "Enter your password > " << flush;

		cin >> input;
		cout << endl;

		if (input != password)
		{
			cout << "Access Denied" << endl;
			cout << endl;
		} 

	} while (input != password);

	cout << "Access Granted" << endl;
	cout << endl;

	int iTemp;
	cin >> iTemp;

	return(0);
}
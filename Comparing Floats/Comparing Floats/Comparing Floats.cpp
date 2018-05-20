#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	float value1 = 1.1;

	if (value1 == 1.1) // Don't use == with floats because floats 
					   // are not == to anything...
	{
		cout << "equals" << endl;

	}
	else
	{
		cout << "Not Equal" << endl;
	}

	cout << endl;
	cout << setprecision(10) << value1 << endl;
	cout << endl;

	// Not equal to 1.1 because with setprecision we can see that it is 
	// actually 1.100000024...
	
	// If you want to do it right...

	float value2 = 1.1;

	if (value2 < 1.11) // Don't use == with floats because floats 
					   // are not == to anything...
	{
		cout << "Equal" << endl;

	}
	else
	{
		cout << "Not Equal" << endl;
	}

	cout << endl;
	cout << setprecision(10) << value2 << endl;
	cout << endl;

	int iTemp;
	cin >> iTemp;

	return(0);
}
#include <iostream>
#include <limits>

using namespace std;

int main()
{
	// Program just designed to demonstrate Int Tpyes and...
	// ...how they work...

	int value = 24;
	cout << "An Int: " << value << endl;
	cout << endl;

	cout << "Max Int Value: " << INT_MAX << endl;
	cout << endl;
	cout << "Min Int Value: " << INT_MIN << endl;
	cout << endl;

	long int lValue = 65165151;
	cout << "Long Int: " << lValue << endl;
	cout << endl;

	short int sValue = 2400;
	cout << "Short Int Max: " << sValue << endl;
	cout << endl;

	cout << "Short Int Minimum: " << SHRT_MIN << endl;
	cout << endl;

	cout << "Short Int Maximum: " << SHRT_MAX << endl;
	cout << endl;

	cout << "Sizeof Int: " << sizeof(int) << endl;
	cout << endl;
	cout << "Sizeof Short Int: " << sizeof(short int) << endl;
	cout << endl;

	unsigned int uValue = 46542;
	cout << "Unsigned Int: " << uValue << endl; // Can only be +
	cout << endl;

	cout << "Unsigned Int Max: " << UINT_MAX << endl; // No -
	cout << endl;

	int iTemp;
	cin >> iTemp;

	return(0);
}
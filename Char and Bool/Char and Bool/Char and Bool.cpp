#include <iostream>

using namespace std;

int main()
{
	bool bValue = true;

	cout << bValue << endl;
	cout << endl;
	cout << "Will output 1 as True or 0 as False." << endl;
	cout << endl;

	char cValue = '7';

	cout << cValue << endl;
	cout << endl;

	cout << (int)cValue << endl;
	cout << endl;

	wchar_t wValue = 'i'; 		// Used representing greater range of characters
	cout << wValue << endl;
	cout << endl;

	cout << (char)wValue << endl;
	cout << endl;

	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;
	cout << endl;

	// Experiment below...

	char dValue = 25;
	cout << dValue << endl;
	cout << endl;

	char fValue = 25;
	cout << (int)fValue << endl;
	cout << endl;

	wchar_t eValue = 3521;
	cout << eValue << endl;
	cout << endl;

	dValue + eValue;
	cout << "d+e is equal to: " << dValue + eValue << endl;
	cout << endl;

	int iTemp;
	cin >> iTemp;

	return(0);
}
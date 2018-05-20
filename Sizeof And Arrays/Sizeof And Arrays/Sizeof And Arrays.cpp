#include <iostream>

using namespace std;

int main()
{
	 
	int values[] = {4, 7, 3, 4}; // Each int is 4 bytes. 4 ints = 16 bytes

	cout << sizeof(values) << " Bytes for values (4)" << endl;
	cout << endl;

	cout << sizeof(int) << " Bytes for int" << endl;
	cout << endl;

	for (unsigned int i = 0; i < sizeof(values) / sizeof(int); i++)
	{
		cout << values [i] << " " << flush;
	}

	// Unsigned int's will not work if negative...

	cout << endl;

	int iTemp;
	cin >> iTemp;

	return(0);
}
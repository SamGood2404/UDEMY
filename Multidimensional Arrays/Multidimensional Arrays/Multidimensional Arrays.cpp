#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Table of values - NEEDS 2 Dimensional Array

	string animals[2][3] = // Arrays must have the same number of elements
							// E.g. Animals 1 & 2 both have 3 elements... 
	{

		{"Fox", "Dog", "Cat"}, // Element 1, Index 0

		{"Mouse", "Squirrel", "Parrot"} // Element 2, Index 1
	
	};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{ 
			cout << animals[i] [j] << " " << flush;
		}

		cout << endl;
	}
	

	int iTemp;
	cin >> iTemp;

	return(0);
}
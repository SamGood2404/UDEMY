#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Using sizeof with Mutli Array's

	string animals[][3] = 
	
	{ 
				 { "Fox", "Dog", "Cat"			  },
				 { "Mouse", "Squirrel", "Parrot"  }

	};

	cout << sizeof(string) << " Bytes using keyword STRING" << endl;
	cout << endl;

	cout << sizeof(animals) << " Bytes using keyword ANIMALS" << endl;
	cout << endl;

	for (unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++)
	{
		for (unsigned int j = 0; j < sizeof(animals[0]) / sizeof(string); j++)
		{
			cout << animals[i][j] << " " << flush;
			
		}
		cout << endl;
	}

	int iTemp;
	cin >> iTemp;

	return(0);
}
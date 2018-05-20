#include <iostream>

using namespace std;

int main()
{

	cout << "The Times Tables 1-100 " << endl;
	cout << "======================" << endl;
	cout << endl;

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			cout << j << " x " << i << " = " << j * i << endl;
		}

		cout << endl;

	}
	
	int iTemp;
	cin >> iTemp;

	return(0);
}
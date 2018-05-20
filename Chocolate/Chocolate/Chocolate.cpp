#include <iostream>

using namespace std;

int main()

{
	cout << "Do you want more chocolate?" << endl;
	cout << endl;

	cout << "Enter 1 for more chocolate" << endl;
	cout << endl;

	cout << "Enter 0 to say you're full" << endl;
	cout << endl;

	int Chocolate;
	cin >> Chocolate;

	if (Chocolate > 0)
	{
		cout << "Nom Nom Nom, I Love It!" << endl;
		cout << endl;
	}
	else
	{
		cout << "I'm full... later though! :)" << endl;
		cout << endl;
	}

	int iTemp;
	cin >> iTemp;

	return(0);
}
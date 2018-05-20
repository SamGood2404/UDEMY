#include <iostream>
#include "Cat.h"

using namespace std;

int main()
{

	cout << "Kitty Cat Program" << endl;
	cout << "=================" << endl;
	cout << endl;

	cout << "Staring Program..." << endl;
	cout << endl;

	{
		Cat Bob; // This is called Instantiating, creating particular cat object...
		Bob.speak();
	}
	// We can use curly brackets liberally, meaning if we want to destroy
	// the kitty before runnig "Ending Program" we close the brackets...

	// Object is destroyed (cat) when we hit the closing curly bracket above...
	
	cout << "Ending Program..." << endl;
	cout << endl;

	int iTemp;
	cin >> iTemp;

	return(0);
}
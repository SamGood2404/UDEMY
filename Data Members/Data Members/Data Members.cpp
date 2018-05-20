// right click "Source Files" - "Add" - "Class"

#include <iostream>
#include "Cat.h" // includes the Cat.h header file
#include "Data Members.h"



using namespace std;

int main()
{

	cout << "Cat Directions" << endl;
	cout << "==============" << endl;
	cout << endl;


	
	Cat Jim_the_cat;
	Jim_the_cat.makeHappy();


	/// Can use true, false, 1, 0 to represent bool.
	///Jim_the_cat.happy = true; // This is accessed from Cat.h because its public...

	cout << "Jimmy, please speak: " << flush; Jim_the_cat.speak();
	cout << endl;

	//
	//

	Cat Bob;
	Bob.makeSad();

	cout << "Bob, please speak: " << flush; Bob.speak();


	int iTemp;
	cin >> iTemp;

	return(0);
}
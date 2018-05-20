#include <iostream>				// Classes combine sub-routine data into packages
#include "Cat.h"
								// Defining your own variable types
using namespace std;			// Classes defined as how you use it...


void speak();



int main()
{

	Cat cat1;

	cout << "Welcome to the cat meow program using Classes!" << endl;
	cout << "==============================================" << endl;
	cout << endl;

	cout << "Kitty... Meow please :) "; cat1.speak(); // <...
	cout << endl;

	cout << "Kitty... Jump please :) "; cat1.jump(); // <...
	cout << endl;

	
	int iTemp;
	cin >> iTemp;

	return(0);
}


// Cat = template for a cat e.g. what a cat is...
// cat1 = a particular cat... is an object!



// When we make a Cat from a blueprint or template.. this is called

/////// Instantiation ///////

void speak()
{
}

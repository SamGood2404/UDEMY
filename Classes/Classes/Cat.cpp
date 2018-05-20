#include <iostream>

#include "Cat.h"

using namespace std;

void Cat::speak()
{
	cout << "Meowwww!" << endl;
	cout << endl;
}


void Cat::jump()
{
	cout << "Jumping to top of bookcase!" << endl;
}


// Double :: means that jump, belongs to Cat...
// Its a blueprint for a Cat...
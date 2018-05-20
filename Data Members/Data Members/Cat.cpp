#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak()
{
	if (happy)
	{
		cout << "Meowwww..." << endl;
		cout << endl;
	}
	else
	{
		cout << "Ssssss!" << endl;
		cout << endl;
	}
}

void Cat::makeHappy()
{
	happy = true;
}

void Cat::makeSad()
{
	happy = false;
}

Cat::Cat()
{
}


Cat::~Cat()
{
}

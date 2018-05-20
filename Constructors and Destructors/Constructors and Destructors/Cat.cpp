#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat()
{
	cout << "Cat Created" << endl;
	cout << endl;

	happy = true;

}

Cat::~Cat()
{
	cout << "Cat Destroyed" << endl;
	cout << endl;
}

void Cat::speak()
{
	if (happy)
	{
		cout << "Meoww!" << endl;
		cout << endl;
	}
	else
	{
		cout << "Ssssss!" << endl;
		cout << endl;
	}
}
#include <iostream>

#include "Utils.h"

using namespace std;

// First time using .h files... 
// Prototype called here or in .h file...

int main()
{
	// Functions...
	do_Something();


	// Don't close Console...
	int iTemp;
	cin >> iTemp;

	return(0);
}


void do_Something()
{
	cout << "Hello" << endl;
	cout << endl;
}
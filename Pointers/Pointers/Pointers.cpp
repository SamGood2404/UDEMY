#include <iostream>

using namespace std;

// void goes before main.

void manipulate(double pValue)
// void manipulate (double *value) This is pointer to a double

{

	cout << "2. Value of double in manipulate: " << pValue << endl; //*
	cout << endl;
	
	pValue = 10.0; // This is the value change to 10, will effect 2. not 3.

	// we would also *value = 10;
	// we do this the dereference value.
	// that says change the value that this pointer is pointing at.
	// means go to that point of memory and change it.

	cout << "3. Value of double in manipulate: " << pValue << endl; //*
	cout << endl;

}


int main()
{

	cout << "Pointers! First lesson" << endl;
	cout << "=======================" << endl;
	cout << endl;

	int nValue = 8;

	int *pnValue = &nValue; // & = address 

	//	int* /// = int pointer or pointer to an int

	// Read right to left, pointer to an int
	// use * to get the address of a value, in this case an int value.

	cout << "Pointer to Int Address: " << pnValue << endl;
	cout << endl;

	cout << "What we get is a memory address, this is the memory address of our int." << endl;
	cout << endl;

	cout << "Pointer to Int Address: " << *pnValue << endl; // output value pointer, points to.
	cout << endl;

	// dereference happening above. = *

	cout << "This is us using an * before the pnValue... meaning we want the value." << endl;
	cout << endl;

	cout << "=============================" << endl;
	cout << endl;

	cout << "Calling void in main and then setting the dValue" << endl;
	cout << "================================================" << endl;
	cout << endl;

	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	cout << endl;

	manipulate(dValue); // we would go... manipulate(*dValue); if we did that above
	cout << "4. dValue: " << dValue << endl;
	cout << endl;



	int iTemp;
	cin >> iTemp;

	return(0);
}
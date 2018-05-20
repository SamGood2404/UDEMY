#include <iostream>
#include <string>
#include <sstream>
#include "Person.h"

using namespace std;

int main()
{

	Person person1;
	Person person2("Bob", 42);
	Person person3("Skar", 18);

	cout << person1.toString() << ": memory address: " << &person1 << endl; // Ampersand
	cout << endl;

	cout << person1.toString() << endl;
	cout << endl;

	cout << person2.toString() << ": memory address: " << &person2 << endl;
	cout << endl;

	cout << person3.toString() << ": memory address: " << &person3 << endl;
	cout << endl;


	int iTemp;
	cin >> iTemp;

	return(0);
}
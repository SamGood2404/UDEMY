#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main()
{

	Person person;

	person.setName("Georgina");

	cout << person.toString() << endl;
	cout << endl;

	cout << "Name of person with get method: " << person.getName() << endl;
	cout << endl;

	int iTemp;
	cin >> iTemp;

	return(0);
}
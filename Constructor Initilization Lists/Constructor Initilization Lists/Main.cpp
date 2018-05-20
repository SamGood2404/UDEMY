#include <iostream>

#include "Person.h"

using namespace std;

int main()
{

	Person person1;
	Person person2("Bob", 42);
	Person person3("Skar", 35);

	cout << person1.toString() << endl;
	cout << endl;

	cout << person2.toString() << endl;
	cout << endl;

	cout << person3.toString() << endl;
	cout << endl;


	int iTemp;
	cin >> iTemp;

	return(0);
}
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


class Person
{
public:
	Person(); // constructor no parameters...

	Person(string newName) { name = newName; age = 0; }; // constructor 1 parameter...

	// as with line above, you CAN have in-line implementations... you don't have to...

	Person(string newName, int newAge); // constructor 2 parameters...
	
	string toString();

private:
	string name;
	int age;
};


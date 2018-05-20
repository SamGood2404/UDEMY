#include <iostream>
#include <string>
#include <sstream>
#include "Person.h"

using namespace std;

Person::Person()
{
	age = 0;
	name = "";
}

Person::Person(string name, int age)
{
	this -> name = name; // variable contains memory location of each individual obj
	this -> age = age; // these are pointer variables

	cout << "Memory location of object: " << this << endl;
	cout << endl;
}

string Person::toString()
{

	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}
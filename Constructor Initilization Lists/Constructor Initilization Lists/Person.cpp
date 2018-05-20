#include "Person.h"
#include <sstream>
#include <string>

string Person::toString()
{
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}
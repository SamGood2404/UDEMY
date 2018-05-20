#include <iostream>
#include <string>
#include <sstream>

using namespace std;


class Person
{
public:

	Person();
	Person(string name, int age);

	string toString();

private:

	string name;
	int age;
};
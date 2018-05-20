#pragma once
#include <iostream>
#include <string>

using namespace std;


class Person
{
private:
	string name;
	int age;

public:
	Person():name("un-named"), age(0)  // Putting values in the same line...
	{
	};

	Person(string name, int age): name(name), age(age) // This is the change
	{
	};	
													
	string toString();
};


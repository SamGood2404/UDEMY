#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string name = "Bob";
	int age = 32;

	stringstream ss;

	//string info = "Name:" + name + "; Age:" + age; 
	// Issue is you can't concatinate an Int with a String...

	ss << "Name is: ";
	ss << name;
	ss << "; Age is: ";
	ss << age;

	string info = ss.str();

	cout << info << endl;


	int iTemp;
	cin >> iTemp;

	return(0);
}
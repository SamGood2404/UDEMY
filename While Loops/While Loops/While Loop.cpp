#include <iostream>

using namespace std;

int main()

{
	int i = 0;

	while (i <= 5)
	{
		cout << "Hello: " << "Number. " << i << endl;

		cout << endl;

		i = i + 1; // Can also right i++;
	}

	// Evaluated Right to Left 
   //So it will be adding 1 to i, then storing it, so everytime it will get
  // 1 closer to 5 and then stop.
 // Starts counting from and including 0, should type "Hello", 6 times...

	cout << endl;
	cout << "Program Quitting..." << endl;
	cout << endl;



	int iTemp;
	cin >> iTemp;

	return(0);
}
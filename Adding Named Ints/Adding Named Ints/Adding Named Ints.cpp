//     4/15/18     4:28 PM

#include <iostream>

using namespace std;

int main()
{

	cout << "Welcome to the adding variables using int's program!";
	cout << endl << endl;
	cout << "This program's code demonstrates how to show the value of an int in the Console and how to add two ints together.";
	cout << endl << endl;

	int My_Dogs = 5;
	int My_Cats = 2;
	int All_My_Animals = My_Dogs + My_Cats;
	int All_My_Animals_And_One_More = My_Dogs + My_Cats +1;

	cout << endl << endl;
	cout << "The number of dogs I own is: " << My_Dogs << endl;
	cout << endl << endl;
	cout << "The number of cats I own is: " << My_Cats << endl;
	cout << endl << endl;
	cout << "The total number of my animals is: " << All_My_Animals << endl;
	cout << endl << endl;
	cout << "The total number of my animals is: " << My_Dogs + My_Cats << endl;
	cout << endl << endl;
	cout << "The total number of my animals if I get a single new animal is: " << All_My_Animals_And_One_More << endl;
	cout << endl << endl;
	
	cout << endl << endl;
	cout << "The reason we have two versions of (THE TOTAL NUMBER OF MY ANIMALS IS), is because" << endl;
	cout << endl << endl;
	cout << "the first version uses a 3rd int to make the calculation and the other uses manual addition of 2 ints." << endl;
	cout << endl << endl;

	int iTemp;
	cin >> iTemp;

	return (0);
}
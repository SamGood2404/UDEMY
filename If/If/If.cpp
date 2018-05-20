#include <iostream>
#include <string> // Need this!

using namespace std;


int main()
{
	string password = "Noodles";


	cout << "Welcome to the wub game, you will now answer 2 questions about your noot in order to win some wub!" << endl;
	cout << endl;
	//cout << "Answer the following questions correctly to earn some wub!" << endl;
	cout << endl;


	//cout << "Enter the password > " << flush;
	cout << "Question 1) What did I have for breakfast today?" << endl;
	cout << endl;
	//cout << "!! HINT !!" << endl;
	//cout << endl << endl;
	//cout << "What did I have for breakfast today?" << endl;
	//cout << endl;
	
	string input;
	cin >> input;
	cout << endl;

	
	if (input == "Noodles" || input == "noodles") // This is a condition... T or F
	{
		cout << "Correct!" << endl;   
		cout << endl;
		cout << "1 Wub Granted!" << endl;
		cout << endl;
		//cout << "Wub total = 1" << endl;
		cout << endl;
	}
	if (input != "Noodles" && input != "noodles")
	{
		cout << "WRONG! No wub for you!" << endl;
		cout << endl;
		cout << "Wub Denied!" << endl;
		cout << endl;
		cout << "Wub total = 0" << endl;
		cout << endl << endl;
	}

	int Num = 22;

	cout << "Question 2) How old is your noot? (This question is for 2 wubs)" << endl;
	cout << endl;
	//cout << "Now, enter how old you are: " << flush;

	cin >> Num;
	cout << endl;

	if (Num == 23)
	{
		cout << "Correct!" << endl;
		cout << endl;
		cout << "2 Wub Granted!" << endl;
		cout << endl;
		//cout << "Wub total = 2" << endl;
		cout << endl;
		cout << "Now go away..." << endl;
	}
	
	if (Num != 23)
	{
		cout << "WRONG! No wub for you!" << endl;
		cout << endl;
		cout << "Now go away..." << endl;
		cout << endl;
	}

	//cout << "'" << input << "'" << endl;

	int iTemp;
	cin >> iTemp;

	return(0);
}
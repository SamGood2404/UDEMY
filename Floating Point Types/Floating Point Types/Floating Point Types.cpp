#include <iostream>
#include <iomanip> // Stands for input/output manipulation...

using namespace std;

int main()
{

	// Floating Point Variable Types

	float fValue = 76.4;
	cout << "The Decimal values following 6 = " << fixed << fValue << endl;
	cout << endl;
	cout << "A float on this compiler takes up: " << sizeof fValue << " bytes" << endl;
	cout << endl;
	// "fixed", above and the relevant #include <iomanip>
	//  means it shows all the decimal places after a number...
	// "scientific" can replace "fixed" which shows the sci calc way.

	// float is only accurate to 8 digits, if you want more then you 
	// need to use "set precision"

	float spValue = 76.4;
	cout << "The Decimal values following 6 = " << setprecision(20) << fixed << spValue << " when we use setprecision, we can set however many we want." << endl;
	cout << "this one is accurate to 7 digits then spews nonsense." << endl;
	cout << endl;
	cout << "Sizeof float: " << sizeof(spValue) << endl;
	cout << endl;


	double dValue = 76.4;
	cout << "The Decimal values following 123. = " << setprecision(20) << fixed << dValue << " when we use setprecision, we can set however many we want." << endl;
	cout << "this one is using 'double' instead, which is accurate to 16 digits." << endl;
	cout << endl;

	float LFValue = 123.456789;
	cout << "The Decimal values following 6 = " << setprecision(20) << fixed << LFValue << " when we use setprecision, we can set however many we want." << endl;
	cout << "this one is accurate to 7 digits then spews nonsense." << endl;
	cout << endl;


	double DDValue = 123.456789;
	cout << "The Decimal values following 123. = " << setprecision(20) << fixed << DDValue << " when we use setprecision, we can set however many we want." << endl;
	cout << "this one is using 'double' instead, which is accurate to 16 digits." << endl;
	cout << endl;
	cout << "Sizeof double: " << sizeof(DDValue) << endl;
	cout << endl;


	cout << "The reason there are zero's after the first ends and before the second ends is because of setprecision.";
	cout << endl << endl;
	cout << "The first one spews nonsense after 7 digits then setprecision pushes 0's to 20 digits.";
	cout << endl << endl;
	cout << "The second one is accurate to 20 digits, then spews nonsense because it is a double meaning it had more precision.";
	cout << endl << endl;

	cout << "If you want super long storage then use 'long double'." << endl;
	cout << endl;
	long double LDValue = 123.456789876543210;
	cout << "The Decimal values following 123. = " << setprecision(20) << fixed << LDValue << " when we use setprecision, we can set however many we want." << endl;
	cout << "this one is using 'long double' instead, which is accurate to 17 digits." << endl;
	cout << endl;
	cout << "Sizeof long double: " << sizeof(LDValue) << endl;
	cout << endl;

	int iTemp;
	cin >> iTemp;
	
	return(0);
}
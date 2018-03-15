// Chapter 04, Programming Challenge 23, This programm will calculate the
// a customer's monthly bill
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Constant
	const double PACKAGE_A = 9.95;
	const double PACKAGE_B = 14.95;
	const double PACKAGE_C = 19.95;

	// Variables 
	char choice;
	int hrs;
	double extra;
	double bill;

	// 
	cout << "Which package does the customer use (A, B, C)?";
	cin >> choice;


	// Set the numeric output formatting
	cout << fixed << showpoint << setprecision(2);

	// Calculate and display areas
	switch (choice)
	{
		// Calculate package A charges
	case 'A':
		cout << "How many hours did the customer use? ";
		cin >> hrs;
		if (hrs < 1 || hrs > 744)
			cout << "Invalid input for the hours!\n";
		else if (hrs < 745)
		{
			if (hrs > 10)
			{
				extra = (hrs - 10) * 2;
				bill = PACKAGE_A + extra;
			}

			if (hrs <= 10)
				bill = PACKAGE_A;

			cout << "The charge are: $" << bill << endl;
		}

		break;

		// Calculate the package B charges
	case 'B':
		cout << "How many hours did the customer use? ";
		cin >> hrs;
		if (hrs < 1 || hrs > 744)
			cout << "Invalid input for the hours!\n";
		else if (hrs < 745)
		{
			if (hrs > 20)
			{
				extra = (hrs - 20) * 1;
				bill = PACKAGE_B + extra;
			}

			if (hrs <= 20)
				bill = PACKAGE_B;

			cout << "The charge are: $" << bill << endl;
		}
		break;

		// Calculate package C charges
	case 'C':
		cout << "How many hours did the customer use? ";
		cin >> hrs;
		if (hrs < 1 || hrs > 744)
			cout << "Invalid input for the hours!\n";
		else if (hrs < 745)
				bill = PACKAGE_C;

			cout << "The charges are: $" << bill << endl;
		break;

	default:
		cout << "Enter A, B or C for the package\n";

	}


	return 0;
}
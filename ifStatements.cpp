// Chapter 04 , programming challenge 12, this program will calculate and display the bank's 
// service fees for the month
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Constants 
	const double CHECK = 10;
	const double EXTRA = 15;
	// Declare Variables
	int checks;
	double checkFee;
	double balance;
	double total;

	// Get the balance and the number of checks written
	cout << "Beginning balance: ";
	cin >> balance;
	cout << "Number of checks written: ";
	cin >> checks;

	// Conditions
	if (balance > 400)
	{
		if (checks < 0)
			cout << "Invalid number of checks.";

		else if (checks < 21)
			checkFee = CHECK + (0.1 * checks);

		else if (checks > 20 && checks < 40)
			checkFee = CHECK + (0.08 * checks);

		else if (checks > 39 && checks < 60)
			checkFee = CHECK + (0.06 * checks);

		else if (checks > 59)
			checkFee = CHECK + (0.04 * checks);

		total = checkFee;

	}


	else if (balance < 0)
	{
		if (checks < 0)
			cout << "Invalid number of checks.";

		else if (checks < 21)
			checkFee = CHECK + (0.1 * checks);

		else if (checks > 20 && checks < 40)
			checkFee = CHECK + (0.08 * checks);

		else if (checks > 39 && checks < 60)
			checkFee = CHECK + (0.06 * checks);

		else if (checks > 59)
			checkFee = CHECK + (0.04 * checks);


		total = checkFee;
		cout << "The account is overdrawn!" << endl;

	}
	else if (balance < 400)
	{
		if (checks < 0)
			cout << "Invalid number of checks.";

		else if (checks < 21)
			checkFee = CHECK + (0.1 * checks);

		else if (checks > 20 && checks < 40)
			checkFee = CHECK + (0.08 * checks);

		else if (checks > 39 && checks < 60)
			checkFee = CHECK + (0.06 * checks);

		else if (checks > 59)
			checkFee = CHECK + (0.04 * checks);


		total = checkFee + EXTRA;

	}
	 // Display the monthly fees
	cout << "The bank fee this month is: " << fixed << showpoint << setprecision(2) << total << endl;
	return 0;
	
}

// Programming challenge #16, this program calculates the interest earned

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Declaring variables
	float INTEREST_RATE;
	unsigned short int TIME;
	float PRINCIPAL;
	float INTEREST;
	float AMOUNT;

	// Get the principal balance
	cout << "What is the principal balance? ";
	cin >> PRINCIPAL;

	// Get the interest rate 
	cout << "What is the interest rate? ";
	cin >> INTEREST_RATE;


	// Get the number of time the interest is compounded
	cout << "How many times is the interest compounded? ";
	cin >> TIME;

	cout << "--------------------------------------------------------------------------------\n";

	// Calculate the amount
	AMOUNT = PRINCIPAL * powf(1+(INTEREST_RATE/(100*TIME)),TIME);

	// Calculate the interest
	INTEREST = AMOUNT - PRINCIPAL;

	// Set precision
	cout << fixed << setprecision(2);

	// Display
	cout << " Interest Rate " << setw(32) << INTEREST_RATE << "%" << endl;
	cout << " Time Compounded " << setw(30) <<  TIME << endl;
	cout << " Principal " << setw(29) << "$  " << PRINCIPAL << endl;
	cout << " Interest: " << setw(31) << "$    " << INTEREST << endl;
	cout << " Amount in savings " << setw(21) << "$  " << AMOUNT << endl;

	return 0;



}

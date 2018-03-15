// Programming challenge #5, this program calculates a theater's gross
// and net box office profit for a night.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
   // Declaring variables
	string MOVIE_NAME;
	const float PERCENTAGE = 0.2;
	const float ADULT_TICKETS_PRICE = 6.00;
	const float CHILD_TICKETS_PRICE = 3.00;
	short int NUMBER_OF_ADULT_TICKETS;
	short int NUMBER_OF_CHILD_TICKETS;
	float ADULT_TICKETS_SOLD;
	float CHILD_TICKETS_SOLD;
	float GROSS_BOX_OFFICE_PROFIT;
	float NET_BOX_OFFICE_PROFIT;
	float AMOUNT_PAID_TO_DISTRIBUTOR;

    // Get the movie name
	cout << "What is the name of the movie?";
	getline (cin, MOVIE_NAME);


	// Get the number of tickets sold per customer
	cout << "What is the number of adult tickets sold?";
	cin >> NUMBER_OF_ADULT_TICKETS;
	cout << "What is the number of child tickets sold?";
	cin >> NUMBER_OF_CHILD_TICKETS;
	cout << "--------------------------------------------------------------------------------\n";

	// Calculate the price adult tickets sold
	ADULT_TICKETS_SOLD = ADULT_TICKETS_PRICE * NUMBER_OF_ADULT_TICKETS;

	// Calculate price of child tickets sold
	CHILD_TICKETS_SOLD = CHILD_TICKETS_PRICE * NUMBER_OF_CHILD_TICKETS;

	// Calculate the gross box office profit
	GROSS_BOX_OFFICE_PROFIT = ADULT_TICKETS_SOLD + CHILD_TICKETS_SOLD;

	// Calculate the net box office profit
	NET_BOX_OFFICE_PROFIT = GROSS_BOX_OFFICE_PROFIT * PERCENTAGE;

	// Calculate the amount paid to distributor
	AMOUNT_PAID_TO_DISTRIBUTOR = GROSS_BOX_OFFICE_PROFIT - NET_BOX_OFFICE_PROFIT; 

	// Set precision
	cout << fixed << setprecision(2);

	// Display
	cout << " Movie Name: " << setw(45) << MOVIE_NAME << endl;
	cout << " Adult Tickets Sold: " << setw(27) << NUMBER_OF_ADULT_TICKETS << endl;
	cout << " Child Tickets Sold: " << setw(27) << NUMBER_OF_CHILD_TICKETS << endl;
	cout << " Gross Box Office Profit: " << setw(18) << "$" << GROSS_BOX_OFFICE_PROFIT << endl;
	cout << " Net Box Office Profit: " << setw(21) <<  "$ " << NET_BOX_OFFICE_PROFIT << endl;
	cout << " Amount Paid to Distributor: " << setw(15) << "$" << AMOUNT_PAID_TO_DISTRIBUTOR << endl;

	return 0;



}


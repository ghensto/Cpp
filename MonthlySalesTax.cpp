// Programming challenge #12, this program calculates the Monthly Sales Tax

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	// Declaring variables
	string MONTH;
	const float SALES_TAX = 0.04;
	const float COUNTY_SALES_TAXE = 0.02;
	short int YEAR;
	float SALES;
	float TOTAL_COLLECTED;
	float COUNTY_SALES_TAX;
	float STATE_SALES_TAX;
	float TOTAL_SALES_TAX;

	// Get the month
	cout << "Month: ";
	getline(cin, MONTH);

	// Get the year
	cout << "Year: ";
	cin >> YEAR;

	// Get the total amount collected
	cout << "What was the total amount collected? ";
	cin >> TOTAL_COLLECTED;

	cout << "--------------------------------------------------------------------------------\n";

	// Calculate the sales price
	SALES = TOTAL_COLLECTED / 1.06;

	// Calculate the county sales tax
	COUNTY_SALES_TAX = SALES * COUNTY_SALES_TAXE;

	// Calculate the state sales tax
	STATE_SALES_TAX = SALES * 0.04;

	// Calculate the total sales tax
	TOTAL_SALES_TAX = COUNTY_SALES_TAX + STATE_SALES_TAX;

	// Set precision
	cout << fixed << setprecision(2);

	// Display
	cout << " Total Collected: " << setw(20) << "$ " << TOTAL_COLLECTED << endl;
	cout << " Sales: " << setw(30) << "$ " << SALES << endl;
	cout << " County Sales Tax: " << setw(21) << "$   " << COUNTY_SALES_TAX << endl;
	cout << " State Sales Tax: " << setw(21) << "$  " << STATE_SALES_TAX << endl;
	cout << " Total Sales Tax: " << setw(21) << "$  " << TOTAL_SALES_TAX << endl;

	return 0;



}
// Chapter 05, Programming Challenge 10, This program will calculate the average 
//rainfall over a period of years

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Variables initialization

	int number_of_years;
	int years;
	int rainfall;
	int months;
	int sum = 0;
	float ave;

	// Get the number of years in the periode

	cout << "How many years do you wish to average? ";
	cin >> number_of_years;

	if (number_of_years > 0)

	{
		// Loops 

		for (years = 1; years <= number_of_years; years++) // Years loop
		{
			cout << "\n\nYear " << years << endl;

			for (months = 1; months <= 4; months++) // months loops
			{
				cout << "Number of inches of rain for " << months << ": ";
				cin >> rainfall;
				sum += rainfall;

			}

		}

		// Calculate the average

		ave = sum / 12.00;

		// Display average

		cout << "\n\nOver a period of 12 months, " << sum << " inches of rain fell." << endl;
		cout << fixed << showpoint << setprecision(3);
		cout << "Average monthly rainfall for the period is " << ave << " inches\n\n";

	}

	else
		cout << "Enter a valid number of years\n";

	return 0;

}

	
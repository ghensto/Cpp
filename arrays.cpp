// Chapter 7, page 445, Programming Challenge 8. This program
// will process some employees wages according to their id


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Constants and Variables
	const int SIZE = 7;
	int empID[SIZE] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
	int hours[SIZE];
	double payRate[SIZE];

	cout << "Enter the requested information for each employee.\n\n";
	
	// Gets hours and payrate
	for (int n = 0; n < SIZE; n++)
	{
		cout << "Employee #" << empID[n] << endl;
		cout << "    Hours worked:";
		cin >> hours[n];
		while (hours[n] < 0)
		{
			cout << " Hours worked must be 0 or more. Please re-enter: ";
			cin >> hours[n];
		}
		cout << "    Pay Rate: $";
		cin >> payRate[n];
		while (payRate[n] < 6)
		{
			cout << " Pay rate must be 6.00 or more. Please re-enter: $";
			cin >> payRate[n];	
		}
		cout << "\n";
	}

	// Display employees wages
	cout << "\n-------------------------------\n";
	cout << "EMPLOYEES \t WAGES\n";
	cout << "-------------------------------\n\n";

	cout << fixed << showpoint << setprecision(2);

	for (int n = 0; n < SIZE; n++)
	{
		double wages = hours[n] * payRate[n];
		cout << "Employee #" << empID[n];
		cout << ": $ " << wages << endl;
	}


	return 0;
}
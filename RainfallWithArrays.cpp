// This program will do the rainfall statistics for 12 months 

#include <iostream>
#include <iomanip>
using namespace std;

// Constant
const int SIZE = 12;

// Function prototype
void getRainfall(double amount[SIZE]);
double getTotal(double amount[SIZE]);
double getAverage(double amount[SIZE]);
double getLargest(double amount[SIZE]);
double getSmallest(double amount[SIZE]);

// Main function
int main()
{
	double amount[SIZE];
	double total, average, largest, smallest;

	cout << fixed << showpoint << setprecision(2);
	getRainfall(amount);
	total = getTotal(amount);
	average = getAverage(amount);
	largest = getLargest(amount);
	smallest = getSmallest(amount);

	return 0;
}

// Gets Rainfall
void getRainfall(double amount[SIZE])
{
	for (int month = 0; month < SIZE; month++)
	{
		cout << "Please enter rainfall for month #" << month + 1 << ": ";
		cin >> amount[month];

		// Inputs validation
		if (amount[month] < 0)
		{
			cout << "Error! Enter a positive integer\n\n";
			cout << "Please enter rainfall for month #" << month + 1 << ": ";
			cin >> amount[month];
		}
	}
}

// Gets Total
double getTotal(double amount[SIZE])
{
	double total = 0;

	for (int month = 0; month < SIZE; month++)
		total += amount[month];

	return total;

}

// Gets Average
double getAverage(double amount[SIZE])
{
	double total;
	double average;

	total = getTotal(amount);
	cout << "\nThe total is :" << total << endl;
	average = total / SIZE;
	cout << "The average is :" << average << endl;

	return average;
}

// Gets Largest
double getLargest(double amount[SIZE])
{
	double largest;
	largest = amount[0];
	for (int month = 1; month < SIZE; month++)
		if (largest < amount[month])
			largest = amount[month];

	cout << "The largest is :" << largest << endl;
	return largest;
}

// Gets Smallest
double getSmallest(double amount[SIZE])
{
	double smallest;
	smallest = amount[0];
	for (int month = 1; month < SIZE; month++)
		if (smallest > amount[month])
			smallest = amount[month];

	cout << "The smallest is:" << smallest << endl;
	return smallest;
}


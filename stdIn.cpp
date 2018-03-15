// This program will ask you to enter ten values, then it will
// determine the largest and smallest
// of the values you entered

#include <iostream>
using namespace std;

const int SIZE = 10;

void getnumbers(double number[SIZE]);
double getLargest(double number[SIZE]);
double getSmallest(double number[SIZE]);




int main()
{

	double number[SIZE];

	getnumbers(number);
	getLargest(number);
	getSmallest(number);

	return 0;
}

// Gets numbers
void getnumbers(double number[SIZE])
{
	for (int count = 0; count < SIZE; count++)
	{
		cout << "Enter an integer value: ";
		cin >> number[count];
		cout << "\n";
	}
}

// Find Largest
double  getLargest(double  number[SIZE])
{
	double  largest;
	largest = number[0];
	for (int count = 1; count < SIZE; count++)
		if (largest < number[count])
			largest = number[count];

	cout << "The largest value entered is " << largest << endl;
	return largest;
}

// Find Smallest
double  getSmallest(double  number[SIZE])
{
	double  smallest;
	smallest = number[0];
	for (int count = 1; count < SIZE; count++)
		if (smallest > number[count])
			smallest = number[count];

	cout << "The smallest value entered is " << smallest << endl;
	return smallest;
}



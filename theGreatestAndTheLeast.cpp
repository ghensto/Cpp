// Chapter 05, Programming Challenge 13
// This program will let the user enter a series of integers
// and display the largest and smallest number entered
// using a do-while loop

#include <iostream>
using namespace std;

int main()
{
	// Variables
	int a;
	int b = 0;
	int c = 0;
	int largest;
	int smallest;
	int count = 0;

	// Program's goal

	cout << " You will enter a series of integers and\n"
		<< " I will then tell you the largest and\n"
		<< " the smallest numbers you entered.\n"
		<< " Enter - 99 to terminate the series.\n\n\n";


	// Gets integer

	cout << "Enter an integer (-99 to quit): ";
	cin >> a;

	// First input validation

	if (a != -99)

	{
		// Other inputs validation

		do
		{

			// Gets integers

			cout << "Enter another integer (-99 to quit): ";
			cin >> c;

			// Integers comparison

			if (count <= 1 && c != -99)
			{
				if (c > b)
				{
					largest = c, smallest = b;
					b = c;
				}
				else if (b > c)
				{
					largest = b, smallest = c;
					b = c;
				}
			}
			else if (count > 1 && c != -99)
			{
				if (c > largest)
					largest = c;
				else if (c < smallest)
					smallest = c;
			}

			count++;


		} while (c != -99 && count >= 0);
	}

	// Compare first number input to largest and smallest numbers got from 
	// the first comparison 

	if (c = -99 && a != -99)
	{
		if (a > largest && a != -99)
			largest = a;

		else if (a < smallest && a != -99)
			smallest = a;

		// Display largest and smallest numbers input

		cout << "The largest number entered is: " << largest << endl;
		cout << "The smallest number entered is: " << smallest << "\n\n";
	}
	else



		return 0;
}
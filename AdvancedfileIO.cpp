// This program will read a file and compare the numbers
// inside it

#include <iostream>
#include <fstream>
using namespace std;


int const SIZE = 12;

int main()
{
	// Variables
	fstream iFile;
	int numbers;
	int array[SIZE];
	int highest;
	int lowest;
	int count = 0;
	float sum = 0;
	float ave;
	iFile.open("C:\\temp\\numbers.txt");

	// Verify if the file is open
	if (!iFile)	
		cout << "Error\n";
	else
	{
		// Read the numbers
		while (iFile >> numbers)
		{
			array[count] = numbers;
			sum += numbers;
			count++;
		}

		// Find biggest number
		highest = array[0];
		for (int count = 0; count < SIZE; count++)
			if (array[count] > highest)
				highest = array[count];
		cout << "The highest value is " << highest << endl;

		// Find smallest number
		lowest = array[0];
		for (int count = 0; count < SIZE; count++)
			if (array[count] < lowest)
				lowest = array[count];
		cout << "The lowest value is " << lowest << endl;

		// Display the sum
		cout << "The sum of the numbers is " << sum << endl;

		// Find and display the average
		ave = sum / SIZE;
		cout << "The average of the numbers is " << ave << endl;

		// Close the file
		iFile.close();
	}
	return 0;
}
// Chapter 05, Programming Challenge 24, This program will
// process the numbers contained in a file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Variables initialization

	ifstream iFile;
	int cv;
	float total = 0;
	float sum = 0;
	float ave;

	// File opening

	iFile.open("C:\\temp\\random.txt");
	
	// File analization

	if (iFile)
	{
		while (iFile >> cv)  // while ( iFile >> number)
		{
			total++;
			sum += cv;
			ave = sum / total;
		}

		// Display

		cout << "Number of numbers is: " << total << endl;
		cout << "The sum of all numbers is: " << sum << endl;
		cout << "Average of numbers is: " << ave << endl;
	}
	else
		cout << "Error in file open!" << endl;

	iFile.close();
	return 0;

}
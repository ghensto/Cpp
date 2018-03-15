#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	int const X = 13;
	int numbers[X];
	fstream iFile;
	iFile.open("C:\\temp\\numbers.txt");

	// Verify if the function is open
	if (iFile)
		cout << "Open\n";
	else
		cout << "Error\n";

	while (iFile >> numbers[X])
	{
		cout << numbers[X] << endl;
	}

	iFile.close();

	return 0;


}
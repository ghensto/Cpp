// Chapter 10, Programming Challenge 15. This program
// will analyse the characters of a file
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;



int main()
{
	// Variables
	int uCase = 0, lCase = 0, dgt = 0, count = 0;
	ifstream inputFile;
	bool upper = false;
	bool lower = false;
	bool digit = false;
	bool valid = false;
	char characters;
	

	inputFile.open("C:\\temp\\text.txt");
	if (!inputFile)
		cout << "File open failure!\n";
	else
	{
		// Analyses file
		while (inputFile >> characters)
		{
			if (isupper(characters))
			{
				upper = true;
				uCase++;
			}
			if (islower(characters))
			{
				lower = true;
				lCase++;
			}
			if (isdigit(characters))
			{
				digit = true;
				dgt++;
			}
		}
	}
	inputFile.close();

	// Dispaly informations about characters inside file
	cout << "Uppercase characters: " << uCase << endl;
	cout << "Lowercase characters: " << lCase << endl;
	cout << "Digits: " << dgt << endl;

	return 0;
}


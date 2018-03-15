// Chapter 10, Programming Challenge 12. This program the validity
// of the password entered
#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
bool ValidPassword(char string[]);

int main()
{
	// Variables
	const int SIZE = 100;
	char pass[SIZE];
	bool validation = false;

	// Gets password
	cout << "Enter a password:";
	cin.getline(pass, SIZE);

	// Verify password
	validation = ValidPassword(pass);
	if (validation == true)
		cout << "The password is valid\n";
	if (validation == false)
	{
		cout << "The password is invalid\n"
			 << "\nThe password must have:\n"
			 << "at least one uppercase character\n"
			 << "at least one lowercase character, and\n"
			 << "at least one numeric digit\n";
	}
	return 0;
}

bool ValidPassword(char string[])
{
	int length;
	char check;
	bool upper = false;
	bool lower = false;
	bool digit = false;
	bool valid = false;
	length = strlen(string);

	// Analyses password
	for (int count = 0; count < length; count++)
	{
		check = string[count];
		if (isupper(check))
			upper = true;
		if (islower(check))
			lower = true;
		if (isdigit(check))
			digit = true;
	}

	// Decides password validity
	if (upper && lower && digit)
		valid = true;
	else
		valid = false;

	return valid;
}



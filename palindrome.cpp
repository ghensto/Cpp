// This program will analyse a string and
// decide if it is a palindrome or not
#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
bool palindrome(char string[]);

int main()
{
	// Variables
	const int SIZE = 100;
	char pass[SIZE];
	bool validation = false;

	// Gets 
	cout << "Please enter a string: ";
	cin.getline(pass, SIZE);

	// Verifies if the string is a palindrome

	 validation = palindrome(pass);
	 if (validation == true)
		 cout << pass << " is a palindrome\n";
	 if (validation == false)
		 cout << pass << " is not a palindrome\n";

	return 0;
}


bool palindrome(char string[])
{
	const int size = 100;
	char string1[size];
	char string2[size];
	char string3[size];
	int count1 = 0, count2 = 0, count3 = 0;

	strcpy(string1, string);

	//converting user input to upper case and taking out numerics
	while (string1[count1] != 0)
	{
		if (isalpha(string1[count1]))
			string2[count2++] = toupper(string1[count1]);
		count1++;
	}
	string2[count2] = 0;

	//reverising the string2 backwards into streing3
	while (count2-- > 0)
		string3[count3++] = string2[count2];
	string3[count3] = 0;

	//comparing and displaying output result to user
	if (strcmp(string2, string3) == 0)
		return true;
	else
		return false;
}




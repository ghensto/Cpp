// Programming Challenge 01 Chapter 10. This program will
// count the number of character in a string

#include <iostream>
#include <cstring>
using namespace std;


// Function prototype
int characters(char *line);

int main()
{
	const int SIZE = 80;
	char line[SIZE];
	int numCharacters;

	// Gets String
	cout << "Please enter a string of 80 characters or less: \n";
	cin.getline(line, SIZE);

	// Count and dsiplay number of characters
	numCharacters = characters(line);
	cout << "\nThe length of that string is: " << numCharacters << endl;

	return 0;
}
int characters(char *line)
{
	int count = 0;
	int x;
	while (line[count] != '\0')
	{
		x = count;
		count++;
	}
	return x;
}
// Programming Challenge 03, chapter 10. This program will count
// the number of words in a string

#include <iostream>
#include <cstring>
using namespace std;


// Function prototype
int words(char *line);

int main()
{
	const int SIZE = 80;
	char line[SIZE];
	int numWords;

	// Gets string
	cout << "Enter a C-string, 80 or fewer characters: \n";
	cin.getline(line, SIZE);

	// Count and display number of words
	numWords = words(line);
	cout << "\nThe number of words in the C-string: " << numWords << "\n" << endl;
	return 0;
}
int words(char *line)
{
	int words = 0;
	int count = 0;
	char space = ' ';
	if (line == 0)
		words = 0;
	else
	{
		while (line[count] != '\0')
		{
			if (line[count] != space && line[count + 1] == space)
				words++;
			else if (line[count] != space && line[count + 1] == NULL)
				words++;
			count++;
		}
	}
	return words;
}
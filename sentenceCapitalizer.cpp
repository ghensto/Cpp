// Programming Challenge 05, Chapter 05. This program will
// capitalize the letter at the beginning of each sentence

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


// Function prototype
void capitalizer(char *line);

int main()
{
	const int SIZE = 10000;
	char line[SIZE];

	// Gets sentences
	cout << "Enter at least two sentences, but do not use capital letters.\n";
	cin.getline(line, SIZE);
	
	// Display the sentences in good format
	cout << "\nHere are your sentences with beginning words capitalized: " << endl;
	capitalizer(line);

	return 0;
}
void capitalizer(char *sentence)
{
	int i = 0;
	int length;

	if (sentence && strlen(sentence) > 0)
	{
		length = strlen(sentence);
		while (i < length)
		{
			if (isalpha(sentence[0]))
				sentence[0] = toupper(sentence[0]);

			if (ispunct(sentence[i]) && i < length - 1 && isspace(sentence[i + 1]))
			{
				sentence[i + 2] = toupper(sentence[i + 2]);
			}

			if (isalpha(sentence[i]) == false && sentence[i-1] == ' ')
			{
				sentence[i+1] = toupper(sentence[i+1]);
			}
			i++;
		}
	}

	cout << sentence;
	cout << endl;
}
#include <iostream>
using namespace std;

// Function prototype
int getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

// Global Variables
int score;
int lowest;

int main()
{
	int test1, test2, test3, test4, test5;

	getScore(test1);
	getScore(test2);
	getScore(test3);
	getScore(test4);
	getScore(test5);

	calcAverage(test1, test2, test3, test4, test5);

	return 0;
}

// Function that gets the test scores
int getScore(int &score)
{
	cout << "Enter a test score: ";
	cin >> score;
	
	// Inputs validation
	while (score < 0 || score > 100)
	{
		cout << "Enter a test score between 0 and 100: ";
		cin >> score;
	}
	return score;
}

// Calculate the average
void calcAverage(int test1, int test2, int test3, int test4, int test5)
{
	findLowest( test1, test2, test3, test4, test5);

	int ave;

	if (lowest > -1) // When the numbers are differents
	{
		ave = (test1 + test2 + test3 + test4 + test5 - lowest) / 4;
	}
	

	else if (lowest < 0) // When some of the numbers are equal
	{
		ave = (test1 + test2 + test3 + test4 + test5) / 5;
	}
		
	cout << "After dropping the lowest score, the test average is: " << ave << endl;
}

// Find the lowest score
int findLowest(int test1, int test2, int test3, int test4, int test5)
{

	if (test1 < test2 && test1 < test3 && test1 < test4 && test1 < test5)
		lowest = test1;
	else if (test2 < test1 && test2 < test3 && test2 < test4 && test2 < test5)
		lowest = test2;
	else if (test3 < test1 && test3 < test2 && test3 < test4 && test3 < test5)
		lowest = test3;
	else if (test4 < test1 && test4 < test2 && test4 < test3 && test4 < test5)
		lowest = test4;
	else if (test5 < test1 && test5 < test2 && test5 < test4 && test5 < test3)
		lowest = test5;
	else 
		lowest = -1;

	return lowest;

}

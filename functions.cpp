#include <iostream>
using namespace std;

// Function prototype
int getTotal(int num[4][5]);
double getAverage(int num[4][5]);
int getRowTotal(int num[4][5],int);
int getColTotal(int num[4][5],int);
int getHighestInRow(int num[4][5],int);
int getLowestInRow(int num[4][5],int);




int main()
{
	int num[4][5] = { { 1, 2, 3, 4, 5 },
	{ 6, 7, 8, 9, 10 },
	{ 11, 12, 13, 14, 15 },
	{ 16, 17, 18, 19, 20 } };

	int total = 0, rTotal, cTotal, highest, lowest;
	double  average;

	total = getTotal(num);
	cout << "The total of the array elements is " << total << endl;
	average = getAverage(num);
	cout << "The average value of an element is " << average << endl;
	rTotal = getRowTotal(num , 0);
	cout << "The total of row 0 is " << rTotal << endl;
	cTotal = getColTotal(num , 2);
	cout << "The total of col 2 is " << cTotal << endl;
	highest = getHighestInRow(num , 2);
	cout << "The highest value in row 2 is " << highest << endl;
	lowest = getLowestInRow(num , 2);
	cout << "The lowest value in row 2 is " << lowest << endl;

	return 0;
}

int getTotal(int num[4][5])
{
	int total = 0;
	for (int row = 0; row < 4; row++)
		for (int col = 0; col < 5; col++)
			total += num[row][col];
	return total;
}
double getAverage(int num[4][5])
{
	int total;
	total = getTotal(num);
	double average = total / 20.0;
	return average;
}
int getRowTotal(int num[4][5], int n)
{
	int rTotal = 0;
	for (int row = n; row < n+1; row++)
		for (int col = 0; col < 5; col++)
		rTotal += num[n][col];
	return rTotal;
}
int getColTotal(int num[4][5], int n)
{
	int cTotal = 0;
	for (int col = n; col < n+1; col++)
		for (int row = 0; row < 4; row++)
			cTotal += num[row][n];
	return cTotal;
}
int getHighestInRow(int num[4][5], int n)
{
	int largest;
	int row = 0;
	largest = num[row][0];
	for (int row = n; row < n+1; row++)
		for (int col = 0; col < 5; col++)
			if (num[row][col] > largest)
				largest = num[row][col];
	return largest;

}
int getLowestInRow(int num[4][5], int n)
{
	int lowest;
	
	for (int row = 2; row < n + 1; row++)
		for (int col = 0; col < 5; col++)
		{
			lowest = num[row][0];
			if (num[row][col] < lowest)
				lowest = num[row][col];
		}
	return lowest;
}


// This program will that keep track of how many times count() has been called

#include <iostream>
using namespace std;

// Function prototype
int count();

// Global variable
int track = 0;

int main()
{
	
	for (int x= 1; x <= 5; x++)
	{
		count();
		cout << "\n";
	}
	
	
}

int count()
{
	track++;
	cout << "This is call Number " << track << endl;
	
	return track;
}
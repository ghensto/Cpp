#include <iostream>
using namespace std;

int main()
{
	const int i = 5;
	int *num;
	num = new int (i); // Dynamic memory allocation

	// Gets integers
	for (int count = 0; count < i; count++)
	{
		cout << "Please enter an integer: ";
		cin >> *(num + count);
	}

	// Displays integers entered 
	cout << "\n" << endl;
	cout << "The integers that you entered doubled are: \n";

	for (int count = 0; count < i; count++)
	{
		cout <<*(num + count) *2 << endl;
	}

	// Free the dynamically allocted memory
	 num = NULL;

	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	char cvar; 
	int ivar; 
	float fvar;
	char *cptr;
	int *iptr;
	float *fptr;

	// Gets inputs
	cout << "Enter a character: ";
	cin >> cvar;
	cout << "Enter an integer: ";
	cin >> ivar;
	cout << "Enter a float: ";
	cin >> fvar;
	cout << "\n";

	// Links variables to pointers
	cptr = &cvar;
	iptr = &ivar;
	fptr = &fvar;

	// Display inputs
	cout << "The values entered are:\n"
		<< *cptr << " " << " " << *iptr << " " << *fptr
		<< endl;

	// Assigning other values to pointers
	*iptr = 65;
	*fptr = 2.0;
	*cptr = *iptr + *fptr;

	// Display the new value of cvar
	cout << "\n The value of cvar is: " << *cptr << endl;
	
	
	return 0;
}
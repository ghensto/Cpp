#include <iostream>
using namespace std;

// Functions prototype
int getValues(int*, int*, int*);
int doubleValues(int*, int*, int*);
int DisplayValues(int*, int*, int*);


int  main()
{
	int var1, var2, var3;

// Call the functions and passes the address of the variables
	getValues(&var1, &var2, &var3);
	doubleValues(&var1, &var2, &var3);
	DisplayValues(&var1, &var2, &var3);

}

int getValues(int *var1, int *var2, int *var3)
{
	//Gets integers
	cout << "Enter an integer: ";
	cin >> *var1;
	cout << "Enter an integer: ";
	cin >> *var2;
	cout << "Enter an integer: ";
	cin >> *var3;
	return 0;
}

int doubleValues(int *var1, int *var2, int *var3)
{
	// Double the integers value
	 *var1 *= 2 ;
	 *var2 *= 2 ;
	 *var3 *= 2;
	 return 0;
}

int DisplayValues(int *var1, int *var2, int *var3)
{
	// Display the doubled values
	cout << "\nThe values doubled are: \n"
		<< *var1 << " "
		<< *var2 << " "
		<< *var3 << " " << endl;
	return 0;
}
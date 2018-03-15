// This program will perform the chosen operation on two numbers 
// entered by the user

#include <iostream>
using namespace std;

// Function prototype
float addNumbers(float, float);
float subtractNumbers(float, float);
float multiplyNumbers(float, float);
float divideNumbers(float, float);
void selection(int, float, float);
float result;


int main()
{
	// Variables
	int choice;
	float number1;
	float number2;

	do
	{

		// Display Menu
		cout << "Math Program:\n";
		cout << "\t 1. Add two numbers\n";
		cout << "\t 2. Subtract two numbers\n";
		cout << "\t 3. Multiply two numbers\n";
		cout << "\t 4. Divide two numbers\n";
		cout << "\t 5. Quit\n";
		cin >> choice;

		// Inputs validation for the menu
		while (choice < 1 || choice > 5)
		{
			cout << "\nYou must choose between 1 and 5!\n";

			// Display Menu
			cout << "\n";
			cout << "Math Program:\n";
			cout << "\t 1. Add two numbers\n";
			cout << "\t 2. Subtract two numbers\n";
			cout << "\t 3. Multiply two numbers\n";
			cout << "\t 4. Divide two numbers\n";
			cout << "\t 5. Quit\n";

			cin >> choice;
		}

		if (choice == 5)
		{
			selection(choice, 0, 0);
			cout << "Thanks for using the program!\n";
		}

		else
		{

			// Get numbers and function call
			cout << "Enter two numbers: ";
			cin >> number1 >> number2;
			selection(choice, number1, number2);

			// Display results
			if (choice == 1)
				cout << "The numbers added are: " << result << "\n\n";
			else if (choice == 2)
				cout << "The numbers subtracted are: " << result << "\n\n";
			else if (choice == 3)
				cout << "The numbers multiplied are: " << result << "\n\n";
			else if (choice == 4)
				cout << "The numbers divided are: " << result << "\n\n";

		}
	} while (choice != 5);
	
	return 0;

}

// Addition
float addNumbers(float number1, float number2)
{
			result = number1 + number2;
			return result;
}

// Subtraction
float subtractNumbers(float number1, float number2)
{
	result = number1 - number2;
	return result;
}

//Multiplication
float multiplyNumbers(float number1, float number2)
{
	result = number1 * number2;
	return result;
}

// Division
float divideNumbers(float number1, float number2)
{
	result = number1 / number2;
	return result;
}

void selection(int choice,float number1, float number2)
{
	// Choose the right operation 
	switch (choice)
	{
	case 1: addNumbers(number1, number2);
		break;
	case 2: subtractNumbers(number1, number2);
		break;
	case 3: multiplyNumbers(number1, number2);
		break;
	case 4: divideNumbers(number1, number2);
		break;
	case 5: 
		break;
	}
		
}
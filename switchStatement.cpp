// Chapter 04, Programming Challenge 21, This programm will calculate the area
// of a circle, a rectangle or a triangle.

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	// Constant
	const double PI = 3.14159;

	// Variables 
	int choice;
	float radius;
	float length;
	float width;
	float base;
	float height;
	float area;

	// Dispaly the menu
	cout << "\t Geometry Calculator \n\n"
		<< "1. Calculate the Area of a Circle \n"
		<< "2. Calculate the Area of a Rectangle \n"
		<< "3. Calculate the Area of a Triangle \n"
		<< "4. Quit \n";
	cin >> choice;

	
   // Set the numeric output formatting
		cout << fixed << showpoint << setprecision(2);

	// Calculate and display areas
		switch (choice)
		{
			// Calculate circle area
		case 1:
			cout << "Enter the radius of the circle\n";
			cin >> radius;
			if (radius < 1)
				cout << "Invalid input for the radius!\n";
			else if (radius > 0)
			{
				area = PI * pow(radius, 2);
				cout << "The area of the circle is: " << area << endl;
			}
			
			break;

			// Calculate rectangle area
		case 2:
			cout << "Enter the length of the rectangle ";
			cin >> length;
			cout << "Enter the width of the rectangle ";
			cin >> width;
			if (length < 1)
				cout << "Invalid input for the length!\n";
			else if (width < 1)
				cout << "Invalid input for the width!\n";
			else if (length > 0 && width > 0)
			{
				area = length * width;
				cout << "The area of the rectangle is: " << area << endl;
			}
			break;
			
			// Calculate Triangle area
		case 3:
			cout << "Enter the base of the Triangle ";
			cin >> height;
			cout << "Enter the height of the Triangle ";
			cin >> base;
			if (height < 1)
				cout << "Invalid input for the base!\n";
			else if (base < 1)
				cout << "Invalid input for the height!\n";
			else if (length > 0 && width > 0)
			{
				area = base * height * 0.5;
				cout << "The area of the triangle is: " << area << endl;
			}
			break;
        
		case 4:
			cout << "Program ending. \n";
			break;

		default:
			cout << "The valid choices are 1 through 4. Restart the\n"
				<< "the program and select one of those.\n";

		}


	return 0;
}
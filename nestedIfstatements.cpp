// Chapter 04, Programming Challenge 10, this program will calculate the cost of the purchase
// from the number of units sold in a software sales company
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Constant
	const float PRICE = 99.0;

	// Declare variables
	int units;
	float total;
	float discountedPrice;

	// Get the number of units sold
	cout << "Enter the number of units sold: ";
	cin >> units;

	// Determine the quantity discount 

	if (units < 0 || units == 0)
		cout << "Invalid number of units" << endl;
	else 
	{if (units < 10 && units > 0)
		discountedPrice = PRICE * 1;

	else if (units > 9 && units < 20)
		discountedPrice = PRICE - (PRICE * 0.2); // 20 % discount

	else if (units > 19 && units < 50)
		discountedPrice = PRICE - (PRICE * 0.3); // 30 % discount

	else if (units > 49 && units < 100)
		discountedPrice = PRICE - (PRICE * 0.4); // 40 % discount

	else if (units > 99)
		discountedPrice = PRICE - (PRICE * 0.5); // 50 % discount

	// Calculate and Display the toatl price
	total = units * discountedPrice;
	 
	cout << "The total cost of the purchase is $" << fixed << showpoint << setprecision(2) << total << endl;
}

		return 0;
}
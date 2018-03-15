// Programming Challenge 15. This program will calculate 
// the pay for either an hourly paid worker or salaried
// worker

#include <iostream>
#include <iomanip>
using namespace std;

struct HourlyPaid
{
	float hoursWorked;
	float HourlyRAte;
};

struct Salaried
{
	float salary;
	float bonus;
};

union PayRoll
{
	HourlyPaid h;
	Salaried s;
};

int main()
{
	PayRoll p;
	char payType;
	float payRate;
	float grossPay;

	cout << fixed << showpoint << setprecision(2);

	// Gets the pay type, hourly or salary
	cout << "Hourly(H) or Salaried(S)? ";
	cin >> payType;

	// Determine gross pay according to the pay type
	if (payType == 'H')
	{
		cout << "Enter the number of hours worked: ";
		cin >> p.h.hoursWorked;
		cout << "Enter the hourly pay rate: ";
		cin >> p.h.HourlyRAte;
		grossPay = p.h.hoursWorked * p.h.HourlyRAte;
		cout << "Gross Pay: " << grossPay << endl;
	}

	else if (payType == 'S')
	{
		cout << "Enter the salary amount: ";
		cin >> p.s.salary;
		cout << "Enter the bonus amount: ";
		cin >> p.s.bonus;
		grossPay = p.s.salary + p.s.bonus;
		cout << "Gross Pay: " << grossPay << endl;
	}
		return 0;
}
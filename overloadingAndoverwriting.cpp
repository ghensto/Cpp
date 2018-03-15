#include <iostream>
using namespace std;

// Function Prototype

void displayMsg1();
void displayMsg2(int);
void displayMsg3(int, char[20]);


int main()
{

	int count;
	char msg[20];

	cout << "Output from function displayMsg1:" << endl;
	for (int x = 1; x <= 4; x++)
		displayMsg1();

	cout << endl;
	cout << "How many times do you want the message displayed?" << endl;
	cin >> count;
	cout << "Output from function displayMsg2:" << endl;
	displayMsg2(count);

	cout << endl;
	cout << "How many times do you want the message displayed?" << endl;
	cin >> count;
	cout << "What message do you want displayed?" << endl;
	cin.ignore();
	cin.getline(msg, 20);
	cout << "Output from function displayMsg3:" << endl;
	displayMsg3(count, msg);
	return 0;
}

// Definition of function displayMsg1

void displayMsg1()
{
	cout << "Hello world!\n";
}

// Definition of function displayMsg2

void displayMsg2(int count)
{
	for (int x = 1; x <= count; x++)
	{
		cout << "Hello world!\n";
	}
	
}

// Definition of function displayMsg3

void displayMsg3(int count, char msg [20])
{
	for (int x = 1; x <= count; x++)
	{
		cout << msg << endl;
	}

}

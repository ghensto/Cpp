#include <iostream>
#include <cctype>
using namespace std;

void display(char *x);

int main()
{
	char x[80];
	char y[80];
	cout << "Enter a sentence.";
	cin.getline(x, 80);
	cout << "Enter a sentence.";
	cin.getline(y, 80);
	
	display(x);
	if (strcmp(x, y) == 0)
		cout << "They are the same\n";
	if (strcmp(x, y)  < 0)
		cout << "1comes before 2\n";
	if (strcmp(x, y)  > 0)
		cout << "positive order\n";
	strcat(x, y);
	return 0;
}

void display(char *x)
{
	cout << "The sentence you entered was: " << x << endl;
}
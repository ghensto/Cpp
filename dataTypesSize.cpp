// Chapter 02, Programming Challenge 09
// This program will display the size of the
// following data type: char, int float and double.
#include <iostream>
using namespace std;
int main()
{

	cout << "char:\t" << sizeof(char) << " bytes" << endl;
	cout << "int:\t" << sizeof(int) << " bytes" << endl;
	cout << "float:\t" << sizeof(float) << " bytes" << endl;
	cout << "double:\t" << sizeof(double) << " bytes" << endl;
	return 0;
}
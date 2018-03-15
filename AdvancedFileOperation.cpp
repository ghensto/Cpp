// This program does some advanced file operations.
#include <iostream>
#include <fstream>
using namespace std;


struct StudentInfo
{
	char name[30];
	int age;
	float gpa;
	char grade;
};

int main()
{
	//Variables
	fstream outputFile;
	StudentInfo studentsText[4];
	StudentInfo studentsBinary[4];

	//Structure initialization
	StudentInfo students[4] = { { " Ann Annson", 10, 1.10, 'D' },
								{ "Bill Billson", 20, 2.20, 'C' },
								{ "Carl Carlson", 30, 3.30, 'B' },
								{ "Don Donson", 40, 4.00, 'A' } };

	//Creates student.txt file 
	outputFile.open("students.txt", ios::out);

	//Writes structure data to file
	for (int count = 0; count < 4; count++)
	{
		outputFile << students[count].name << endl;
		outputFile << students[count].age << endl;
		outputFile << students[count].gpa << endl;
		outputFile << students[count].grade << endl;
	}
	outputFile.close();

	//Creates student.bin file
	outputFile.open("students.bin", ios::out | ios::binary);

	//Writes structure data to file
	for (int count = 0; count < 4; count++)
	{
		outputFile.write(reinterpret_cast<char*>(&students[count]), sizeof(students[count]));
	}
	outputFile.close();

	//Opens and reads the student.txt file
	outputFile.open("students.txt", ios::in);

	//Writes structure data to file
	for (int count = 0; count < 4; count++)
	{
		if (4 > 0)
			outputFile.ignore();
		outputFile.getline(studentsText[count].name, sizeof(students[count].name));
		outputFile >> studentsText[count].age;
		outputFile >> studentsText[count].gpa;
		outputFile >> studentsText[count].grade;
	}

	cout << "\tStudents Information from text file\n";
	cout << "\t-------------------------------------\n";

	//Writes structure data to file
	for (int count = 0; count < 4; count++)
	{
		cout << "Student" << count << " name is:\t" << studentsText[count].name << endl;
		cout << "Student" << count << " age is:\t" << studentsText[count].age << endl;
		cout << "Student" << count << " gpa is:\t" << studentsText[count].gpa << endl;
		cout << "Student" << count << " grade is:\t" << studentsText[count].grade << endl;
		cout << endl;
	}
	outputFile.close();

	outputFile.open("students.bin", ios::in | ios::binary);

	for (int count = 0; count < 4; count++)
	{
		outputFile.read(reinterpret_cast<char*>(&studentsBinary[count]), sizeof(studentsBinary[count]));
	}

	cout << "\tStudents Infomation from binary file\n";
	cout << "\t------------------------------------\n";

	//Writes structure data to file
	for (int count = 0; count < 4; count++)
	{
		cout << "Student" << count << " name is:\t" << studentsBinary[count].name << endl;
		cout << "Student" << count << " age is:\t" << studentsBinary[count].age << endl;
		cout << "Student" << count << " gpa is:\t" << studentsBinary[count].gpa << endl;
		cout << "Student" << count << " grade is:\t" << studentsBinary[count].grade << endl;
		cout << endl;
	}
	outputFile.close();

	cout << "\tDisplays infomation of student number 3\n";
	cout << "\t--------------------------------------\n";
	StudentInfo temp;
	outputFile.open("students.bin", ios::in | ios::binary);
	outputFile.seekg(sizeof(temp) * 2, ios::beg);

	outputFile.read(reinterpret_cast<char*>(&temp), sizeof(temp));

	cout << "Student name is:\t" << temp.name << endl;
	cout << "Student age is:\t\t" << temp.age << endl;
	cout << "Student gpa is:\t\t" << temp.gpa << endl;
	cout << "Student grade is:\t" << temp.grade << endl;

	return 0;
}

//  Chapter 11, Programming Challenge 6
//  Soccer Scores
#include <iostream>
#include <iomanip>
using namespace std;

// Constant for name array size
const int SIZE = 45;

// Constant for the number of players
const int NUM_PLAYERS = 4;

int i = 0;

// Declaration of the Player structure
struct Player
{
	char name[SIZE];
	int number;
	int points;
};

// Function prototypes
void getPlayerInfo(Player &);
void showInfo(Player);
int  getTotalPoints(Player[], int);
void showHighest(Player[], int);

//***********************************************
// Function main                                *
//***********************************************

int main()
{
	// Array of Player structures
	Player team[NUM_PLAYERS];

	// Loop counter
	int index;

	// Get each player's info.
	for (index = 0; index < NUM_PLAYERS; index++)
		getPlayerInfo(team[index]);

	// Display the table headings.
	cout << setw(20) << left << "\nNAME";
	cout << setw(10) << "NUMBER";
	cout << setw(10) << "POINTS SCORED\n";

	// Display the team info.
	for (index = 0; index < NUM_PLAYERS; index++)
		showInfo(team[index]);

	// Display total points
	int total = 0;
	for (index = 0; index < NUM_PLAYERS; index++)
	{
		total += getTotalPoints(team, index);
	}
	cout << setw(20) << left << "TOTAL POINTS: " << total << endl;

	// Display the player scoring the most points.
	showHighest(team, NUM_PLAYERS);

	return 0;
}

//***********************************************
// Function getPlayer                           *
// This function accepts a reference to a Player*
// structure variable. The user is asked to     *
// enter the player's name, number, and the     *
// number of points scored. This data is stored *
// in the reference parameter.                  *
//***********************************************

void getPlayerInfo(Player &p)
{
	cout << "PLAYER #" << (i+1) << endl;
	cout << "--------\n\n";
	cout << "Player name: ";
	cin.getline(p.name, SIZE);
	cout << "Player's number: ";
	cin >> p.number;
	cout << "Point scored: ";
	cin >> p.points;
	cout << "\n";
	cin.ignore();
	i++;
}

//***********************************************
// Function showInfo                            *
// This function displays the data in the Player*
// structure variable passed into the parameter.*
//***********************************************

void showInfo(Player p)
{
	cout << setw(20) << left << p.name;
	cout << setw(10) << p.number;
	cout << setw(10) << p.points << "\n";
}

//***********************************************
// Function getTotalPoints                      *
// This function accepts an array of Player     *
// structure variables as its argument. The     *
// function calciulates and returns the total   *
// of all the players points in the array.      *
//***********************************************

int getTotalPoints(Player p[], int size)
{
	return p[size].points;
}

//***********************************************
// Function showHighest                         *
// This function accepts an array of Player     *
// structure variables. It displays the name    *
// of the player who scored the most points.    *
//***********************************************

void showHighest(Player p[], int size)
{
	int  highest;
	highest = p[0].points;
	for (int count = 1; count < size; count++)
		if (highest < p[count].points)
			highest = p[count].points;
	
	for (int count = 1; count < size; count++)
		if (highest == p[count].points)
			cout << "The player who scored the most points is: " 
				 << p[count].name << endl;
	
}


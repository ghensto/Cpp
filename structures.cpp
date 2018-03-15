// Chapter 10, Programming Challenge 01. This program will 
// display informations about some movies
#include <iostream>
#include <string>
using namespace std;


struct Movie
{
	string title;
	string director;
	int released;
	int runningTime;

};
// Function prototype
void displayMovie(Movie m);

int main()
{
	// Initializes and defines structres
	Movie movie1 = {"War of the Worlds", "Byron Haskin", 1953, 88};
	Movie movie2 = {"War of the Worlds", "Stephen Spielberg", 2005, 118};

	// Displays informations about the first movie
	displayMovie(movie1);

	cout << "\n\n";

	// Displays informations about the second movie
	displayMovie(movie2);

	return 0;
}

// Displays informations about each movie
void displayMovie(Movie m)
{
	cout << "Title       : " << m.title << endl;
	cout << "Director    : " << m.director << endl;
	cout << "Released    : " << m.released << endl;
	cout << "Running time: " << m.runningTime << " minutes" << endl;
}
/*
	Author: Amanda Som
	Project One: Chada Tech Clocks
	Description:
	Function declarations for formatting time, displaying clocks,
	and updating hours, minutes, and seconds.
*/

#include <iostream>
#include "ClockFunctions.h"
using namespace std;

int main() {

	// Time Variables start at 0
	int hours = 0;
	int minutes = 0;
	int seconds = 0;

	int userChoice = 0;

	// Loop until user chooses to exit
	while (userChoice != 4) {

		// Get formatted time strings
		string clock12 = get12HourString(hours, minutes, seconds);
		string clock24 = get24HourString(hours, minutes, seconds);

		// Display both clocks on screen
		displayClocks(clock12, clock24);

		// Show menu and get user input
		displayMenu();
		cin >> userChoice;

		// Handle user selection and update time
		if (userChoice == 1) {
			addOneHour(hours); // Add one hour
		}
		else if (userChoice == 2) {
			addOneMinute(hours, minutes); // Add one minute
		}
		else if (userChoice == 3) {
			addOneSecond(hours, minutes, seconds); // Add one second
		}
		else if (userChoice == 4) {
			cout << "Exiting program ..." << endl; // Ends program
		}
	}
	return 0;
}

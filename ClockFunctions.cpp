/*
	Author: Amanda Som
	Project One: Chada Tech Clocks
	Description:
	Function declarations for formatting time, displaying clocks,
	and updating hours, minutes, and seconds.
*/

#include "ClockFunctions.h"
#include <iostream>
using namespace std;

// Create 12-hour formatted string
string get12HourString(int hours, int minutes, int seconds) {

	// Convert 24-hour time to 12-hour time
	int hour12 = hours % 12;
	if (hour12 == 0) {
		hour12 = 12; // Midnight or noon becomes 12
	}
	// Figure out AM or PM 
	string period;
	if (hours < 12) {
		period = "A M";
	}
	else {
		period = "P M";
	}
	// Build string
	string time12 = "";

	if (hour12 < 10) time12 += "0"; // Add leading zero
	time12 += to_string(minutes) + ":";

	if (minutes < 10) time12 += "0";
	time12 += to_string(minutes) + ":";

	if (seconds < 10) time12 += "0";
	time12 += to_string(seconds);

	time12 += " " + period;

	return time12;
}
// Create 24-hour formatted time string
string get24HourString(int hours, int minutes, int seconds) {
	string time24 = "";

	if (hours < 10) time24 += "0";
	time24 += to_string(hours) + ":";

	if (minutes < 10) time24 += "0";
	time24 += to_string(minutes) + ":";

	if (seconds < 10) time24 += "0";
	time24 += to_string(seconds);

	return time24;
}
// Display both clocks on the screen
void displayClocks(const string& clock12, const string& clock24) {
	cout <<  "*************************     ************************" << endl;
	cout << "*    12-Hour Clock      *     *     24-Hour Clock     *" << endl;
	
	// Print time strings inside the boxes
	cout << "*   " << clock12 << "      *     *  *  " << clock24 << "   *" << endl;

	cout << "**************************     ************************" << endl;
}
// Display menu options
void displayMenu() {
	cout << endl;
	cout << "**************************" << endl;
	cout << "* 1 - Add Hour           *" << endl;
	cout << "* 2 - Add Minute         *" << endl;
	cout << "* 3 - Add Second         * " << endl;
	cout << "Enter your choice: ";
}
// Add one hour to the clock
void addOneHour(int& hours) {
	hours = hours + 1; // Increase by one hour
	if (hours == 24) {
		hours = 0;
	}
}
// Add one minute
void addOneMinute(int& hours, int& minutes) {
	minutes = minutes + 1; // Increase minute by 1
	if (minutes == 60) {
		minutes = 0;
		addOneHour(hours);
	}
}
// Add one second
void addOneSecond(int& hours, int& minutes, int& seconds) {
	seconds = seconds + 1; // Increase second by 1
	if (seconds == 60) {
		seconds = 0;
		addOneMinute(hours, minutes);
	}
}
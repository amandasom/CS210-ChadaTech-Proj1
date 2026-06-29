/*
	Author: Amanda Som
	Project One: Chada Tech Clocks
	Description:
	Function declarations for formatting time, displaying clocks,
	and updating hours, minutes, and seconds.
*/

#ifndef CLOCKFUNCTIONS_H
#define CLOCKFUNCTIONS_H

#include <string>
//Returns a 12-hour formatted string
std::string get12HourString(int hours, int minutes, int seconds);
//Returns a 24-hour formatted string
std::string get24HourString(int hours, int minutes, int seconds);

//Print both clocks on the screen
void displayClocks(const std::string& clock12, const std::string& clock24);

// Shows menu options
void displayMenu();

// Time update functions
void addOneHour(int& hours);
void addOneMinute(int& hours, int& minutes);
void addOneSecond(int& hours, int& minutes, int& seconds);

#endif

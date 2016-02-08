/*
Chris Golpashin
CSCI 272-5572
Problem 6 in Chapter 11
2016-02-01

Implementation file for dateType.h

*/

#include <iostream>
#include "dateType.h"

using namespace std;

// accessors
int dateType::getDay() { return day; }	// return day
int dateType::getMonth() { return month; } // return month
int dateType::getYear() { return year; }  // return year

// mutators
void dateType::setDay(int newDay)	// set day
{
	day = newDay;
}
void dateType::setMonth(int newMonth) // set month
{
	month = newMonth;
}
void dateType::setYear(int newYear)  // set year
{
	year = newYear;
}

// constructor
dateType::dateType() // default constructor
{
	// default date is 01/01/1900
	day = 1;
	month = 1;
	year = 1900;
}// end default constructor

// other functions
bool dateType::isLeapYear() // returns true if year is a leap year
{
	// determine if year is divisable by 400
	if ((year % 400) == 0) // is leap year
		return true;
	else if ((year % 100) == 0) // is not leap year
		return false;
	else if ((year % 4) == 0) // is leap year
		return true;
	else
		return false; // not a leap year
}
int dateType::daysInMonth() // the days in a month for date
{
	switch (getMonth())
	{
		// months that have 31 days: 01, 03, 05, 07, 08, 10, and 12
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: return 31;
		break;
		// months that have 30 days: 04, 06, 09, and 11
	case 4:
	case 6:
	case 9:
	case 11: return 30;
		break;
		// february has either 28 or 29 days
	case 2: if (isLeapYear())
		return 29;
			else return 28;
	}// end switch
}

//int dateType::daysPassed();  // days passed since beginning of year, include current date
//int dateType::daysRemaining(); // days remaining in year
// add numOfDays to current date and set to new date
//void dateType::addDays(int numOfDays);
void dateType::print()  // print the date mm/dd/yyyy
{
	// print out mm/
	if (month < 10)
		cout << "0" << month << "/";
	else
		cout << month << "/";
	// print out dd/
	if (day < 10)
		cout << "0" << day << "/";
	else
		cout << day << "/";
	// print out yyyy
	cout << year << endl;

}
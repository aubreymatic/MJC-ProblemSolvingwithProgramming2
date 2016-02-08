/*
	Chris Golpashin
	CSCI 272-5572
	Problem 6 in Chapter 11
	2016-02-01

*/

class dateType
{
public: // functions
	// accessors
	int getDay();	// return day
	int getMonth(); // return month
	int getYear();  // return year

	// mutators
	void setDay(int newDay);	// set day
	void setMonth(int newMonth); // set month
	void setYear(int newYear);  // set year

	// constructor
	dateType(); // default constructor

	// other functions
	bool isLeapYear(); // returns true if year is a leap year
	int daysInMonth(); // the days in a month for date
	//int daysPassed();  // days passed since beginning of year, include current date
	//int daysRemaining(); // days remaining in year
	// add numOfDays to current date and set to new date
	//void addDays(int numOfDays);
	void print();  // print the date mm/dd/yyyy

private: // instance variables
	// variables that describe a date
	int day;	// form is dd
	int month;	// form is mm
	int year;	// form is yyyy
}; // end class dateType
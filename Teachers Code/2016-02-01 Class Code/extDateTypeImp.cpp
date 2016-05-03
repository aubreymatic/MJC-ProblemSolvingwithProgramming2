#include "extDateType.h"
#include <iostream>
#include <string>
using namespace std;

// accessor
string getMonthName() { return monthName; }
// mutator
void setMonthName(string newMonthName)
{
	monthName = newMonthName;
}
// constructor
extDateType::extDateType()
{
	dateType();
	monthName = "January";
}
// other
void print();
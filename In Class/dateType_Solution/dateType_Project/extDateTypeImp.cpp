#include "extDateType.h"
#include <iostream>
#include <string>
using namespace std;

// accessor
string extDateType::getMonthName() { return monthName; }
// mutator
void extDateType::setMonthName(/*string newMonthName*/)
{
	/*monthName = newMonthName;*/
}
// constructor
extDateType::extDateType()
{
	dateType();
	monthName = "January";
}
// other
void print()
{

}


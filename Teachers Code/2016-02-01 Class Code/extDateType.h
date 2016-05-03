/*
	John Zamora


	extDateType inherits from dateType

*/
#include "dateType.h"
#include <iostream>
#include <string>
using namespace std;

// need to add string name for month to dateType
// subclass is called extDateType, extending dateType
class extDateType : public dateType
{
public:
	// accessor
	string getMonthName();
	// mutator
	void setMonthName();
	// constructor
	extDateType();
	// other
	void print();
private:
	string monthName;
};
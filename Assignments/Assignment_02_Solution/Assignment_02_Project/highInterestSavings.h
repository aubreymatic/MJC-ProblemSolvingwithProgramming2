//Chris Golpashin
//March 13 2016
//Assignment 02
//highInterestSavings.h

#ifndef H_highInterestSavings
#define H_highInterestSavings

#include "savingsaccount.h"

class highInterestSavings :
  public savingsAccount // inheriting savingsAccount as public
{
public:
  // cunstructor
  highInterestSavings(int acctNum, string name, double initialBalance);
  
	// functions
  void withdraw(double amount);
  void printSummary();


protected:
  // variable
  double m_MinimumBalance;

}; // end of class
#endif // !H_highInterestSavings
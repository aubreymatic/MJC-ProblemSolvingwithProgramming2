//Chris Golpashin
//March 13 2016
//Assignment 02
//savingsAccount.h

#ifndef H_savingsAccount
#define H_savingsAccount

#include "bankaccount.h"

class savingsAccount :
  public bankAccount // inherits bankAccount as public
{
public:
	// constructor
	savingsAccount(int acctNum, string name, double initialBalance);

	// functions
	void withdraw(double amount);
	void printSummary();
	void printStatement();


protected:
  double m_InterestRate;

};
#endif // !H_savingsAccount
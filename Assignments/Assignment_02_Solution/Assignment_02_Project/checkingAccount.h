//Chris Golpashin
//March 13 2016
//Assignment 02
//checkingAccount.h

#ifndef H_checkingAccount
#define H_checkingAccount

#include "bankaccount.h"

class checkingAccount :
	public bankAccount // inheriting bankAccount as public
{
public:
	// constructor
	checkingAccount(int acctNum, string name, double initialBalance);
	
	// functions
	void withdraw(double amount);
	void printStatement();

	// pure virtual function
	virtual void writeCheck(double amount) = 0;

protected:
	// variables
	double m_InterestRate;
	int m_ChecksRemaining;
	double m_MinimumBalance;
}; // end of abstract class
#endif // !H_checkingAccount
//Chris Golpashin
//March 13 2016
//Assignment 02
//noServiceChargeCheckingImp.cpp

#include "noServiceChargeChecking.h"

noServiceChargeChecking::noServiceChargeChecking(int acctNum, string name, double initialBalance) // default constructor
	: checkingAccount(acctNum, name, initialBalance) // callin the parents default cunstructor
{
	m_InterestRate = 2.5; // Some interest rate
	m_ChecksRemaining = -1; // -1 indicates no limit
	m_MinimumBalance = 500; // Minimum balance

}

void noServiceChargeChecking::writeCheck(double amount)
{
	if (m_Balance - amount < 0) // checks to see if balance will be below zero if money is withdrawned
	{
		cout << "Declined: Insufficient funds remain to withdraw that amount" << endl; // true statemant is trigered
		return;
	}

	m_Balance -= amount; // Assume check is cashed immediately
}

void noServiceChargeChecking::printSummary()
{
	// uses parants class print function for standard info
	bankAccount::printSummary(); // calls the parants classes' printSummary function
	// formats new info corectly for output
	cout << setw(25) << "Interest rate:  " << m_InterestRate << "%" << endl;
	cout << setw(25) << "Minimum Balance: $" << m_MinimumBalance << endl;
	cout << setw(25) << "Unlimited checks   " << endl;
	cout << setw(25) << "No monthly service fee   " << endl;
	cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
}
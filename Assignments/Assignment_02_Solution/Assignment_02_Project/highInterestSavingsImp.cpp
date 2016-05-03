//Chris Golpashin
//March 13 2016
//Assignment 02
//highInterestSavingImp.cpp

#include "highInterestSavings.h"

highInterestSavings::highInterestSavings(int acctNum, string name, double initialBalance) // default cunstructor
	: savingsAccount(acctNum, name, initialBalance) // calling the parent classes' default constructor
{
	m_MinimumBalance = 5000; // sets the minimum balance to 5000
}

void highInterestSavings::withdraw(double amount)
{
	if (m_Balance - amount < 0) // checks to see if the balance will not be below zero if withdrawing
	{
		cout << "Declined: Insufficient funds remain to withdraw that amount" << endl; // true statemant is trigered
		return;
	}

	if (m_Balance - amount < m_MinimumBalance) // checks to see if the balance will not be below the 5000 minimum
	{
		cout << "Declined: Minimum balance requirement prohibits this withdrawal" << endl; // true statemant is trigered
		return;
	}

	m_Balance -= amount; // withdraws money if if statemants are not trigered
}

void highInterestSavings::printSummary()
{
	// Uses the already created parents classes print function for standard information
	bankAccount::printSummary(); // calling bankAccount's print function
	// formats the output corectly for the new information
	cout << setw(25) << "Interest rate:  " << m_InterestRate << "%" << endl;
	cout << setw(25) << "Minimum Balance: $" << m_MinimumBalance << endl << endl;
	cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
}
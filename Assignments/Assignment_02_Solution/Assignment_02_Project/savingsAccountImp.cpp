//Chris Golpashin
//March 13 2016
//Assignment 02
//savingsAccountImp.cpp

#include "savingsAccount.h"

savingsAccount::savingsAccount(int acctNum, string name, double initialBalance) // default constructor
	: bankAccount(acctNum, name, initialBalance) // calls the default constructor of the parant class
{
	m_InterestRate = 3.99; // sets the default interest rate to 3.99
}

void savingsAccount::withdraw(double amount)
{
	if (m_Balance - amount < 0) // checks to see if the balance will be below zero when money is withdrawned
	{
		cout << "Declined: Insufficient funds remain to withdraw that amount" << endl; // true statemant is trigered
		return;
	}
	m_Balance -= amount; // withdraws money from balance if if statemants are not triggered
}

void savingsAccount::printSummary()
{
	// Uses the parants classes print function for the standard info
	bankAccount::printSummary(); // calls the parants classes print function
	// formats the new information correctly
	cout << setw(25) << "Interest rate:  " << m_InterestRate << "%" << endl << endl;
	cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
}

void savingsAccount::printStatement() // prints the monthly statement
{
	printSummary();
	cout << "printStatement is not implemented" << endl;
}
//Chris Golpashin
//March 13 2016
//Assignment 02
//checkingAccountImp.cpp

#include "checkingAccount.h"

checkingAccount::checkingAccount(int acctNum, string name, double initialBalance) // default contructor
	: bankAccount(acctNum, name, initialBalance)
{
	// due to this class being abstract, it will not be called to create a object
}


void checkingAccount::withdraw(double amount)
{
	if (m_Balance - amount < 0) // checks to see if the account balance will not be below zero to withdraw money
	{
		cout << "Declined: Insufficient funds remain to withdraw that amount" << endl; // true statemant is trigered
		return;
	}

	if (m_Balance - amount < m_MinimumBalance) // checks to see if the balance will not be below the minium balance when withdrawing
	{
		cout << "Declined: Minimum balance requirement prohibits this withdrawal" << endl; // true statemant is trigered
		return;
	}
	m_Balance -= amount; // withdraws money if if statemant were not trigered
}

void checkingAccount::printStatement() // prints monthly statemant of account
{
	printSummary();
	cout << endl << "printStatement is not implemented in the program" << endl << endl;
}
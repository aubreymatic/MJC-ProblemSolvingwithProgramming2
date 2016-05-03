//Chris Golpashin
//March 13 2016
//Assignment 02
//certificateOfDepositImp.cpp

#include "certificateOfDeposit.h"

certificateOfDeposit::certificateOfDeposit(int acctNum, string name, double initialBalance, int matMon) // default constructor that calls the parant class constructor
	: bankAccount(acctNum, name, initialBalance) // parent classes' default constructor is called
{
	// variables
	m_MaturityMonths = matMon;
	m_CurrentMonth = 1;
	m_InterestRate = 4.75;
}

void certificateOfDeposit::withdraw(double amount) // function to withdraw money from balance
{
	if (m_Balance - amount < 0) // checks to see if the balance will not be zero if money is withdrawned
	{
		cout << "Declined: Insufficient funds remain to withdraw that amount" << endl; // true statment is trigered
		return;
	}
	m_Balance -= amount; // withdraws money if the if statement is not true
}

void certificateOfDeposit::printSummary() // prints a summary of the account
{
	// Use parent class to print standard info
	bankAccount::printSummary(); // calls the parent classes' printSummary function
	// formats the rest of the info correctly
	cout << setw(25) << "Interest rate:  " << m_InterestRate << "%" << endl;
	cout << setw(25) << "Maturity Months:  " << m_MaturityMonths << endl;
	cout << setw(25) << "Current Month:  " << m_CurrentMonth << endl;
	cout << endl << setw(60) << setfill('-') << "" << setfill(' ') << endl;
}

void certificateOfDeposit::printStatement() // prints a monthly statement of the account
{
	printSummary();
	cout << "printStatement is not implemented in the program" << endl;
}
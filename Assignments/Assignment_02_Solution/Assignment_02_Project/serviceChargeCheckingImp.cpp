//Chris Golpashin
//March 13 2016
//Assignment 02
//serviceChargeCheckingImp.cpp

#include "serviceChargeChecking.h"

const int MAX_CHECKS = 5; // sets the max amount of checks that can be written
const double SVC_CHARGE = 10.0l; // monthly service fee

serviceChargeChecking::serviceChargeChecking(int acctNum, string name, double initialBalance) // default constructor
	: checkingAccount(acctNum, name, initialBalance) // calling the constructor of the parant class
{
	m_InterestRate = 0; // No interest
	m_ChecksRemaining = MAX_CHECKS; // Limit of 5 checks
	m_MinimumBalance = 0; // No minimum balance
}

void serviceChargeChecking::writeCheck(double amount) // function to write a check that will be cashed later on
{
	if (m_ChecksRemaining == 0) // checks to see if there are any remain checks
	{
		cout << "Declined: No more checks remaining this month" << endl; // true statemant trigered
		return;
	}

	if (m_Balance - amount < 0) // checks to see if the balance will be below zero when a check is written
	{
		cout << "Declined: Insufficient funds remain to withdraw that amount" << endl; // true statemant trigered
		return;
	}

	m_ChecksRemaining--; // one check is removed if there are remaining checks
	m_Balance -= amount; // balance goes down when the check is cashed

}

void serviceChargeChecking::printSummary()
{
	// Uses parants classes' print functions for the basic info
	bankAccount::printSummary(); // calls the parants classes printSummary function
	// correctly formats the output of the new data
	cout << setw(25) << "Checks remaining:  " << m_ChecksRemaining << endl;
	cout << setw(25) << "Monthly service fee: $" << SVC_CHARGE << endl;
	cout << setw(25) << "No interest  " << endl;
	cout << setw(25) << "No Minimum Balance  " << endl;
	cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
}
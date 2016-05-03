//Chris Golpashin
//March 13 2016
//Assignment 02
//highInterestCheckingImp.cpp

#include "highInterestChecking.h"

highInterestChecking::highInterestChecking(int acctNum, string name, double initialBalance)
	: noServiceChargeChecking(acctNum, name, initialBalance) // modifies the parants classes interest rate and minimun balance
{
	// variables
	m_InterestRate = 5.0; // Higher interest rate
	m_ChecksRemaining = -1; // -1 indicates no limit
	m_MinimumBalance = 1000; // Minimum balance
}
//Chris Golpashin
//March 13 2016
//Assignment 02
//bankAccountImp.cpp

#include "bankAccount.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


	bankAccount::bankAccount(int acctNum, string name, double initialBalance) // constructor
	{
		m_AcctNumber = acctNum;
		m_Name = name;
		m_Balance = initialBalance;
	}

	string bankAccount::get_Name() // accesor to retrieve bank account name
	{
		return m_Name;
	}

	int bankAccount::get_AcctNumber() // accesor to retrieve bank account number
	{
		return m_AcctNumber;
	}

	double bankAccount::get_Balance() // accesor to retrieve bank account ballance
	{
		return m_Balance;
	}

	void bankAccount::deposit(double amount) // function to add a certain amount to the total deposit
	{
		m_Balance += amount;
		cout << "$" << amount << " has been deposited to your account" << endl;
	}



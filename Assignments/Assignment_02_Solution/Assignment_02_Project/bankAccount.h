//Chris Golpashin
//March 13 2016
//Assignment 02
//bankAccount.h

#ifndef H_bankAccount
#define H_bankAccount

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class bankAccount // abstract class
{
public:
  // constructor
  bankAccount(int acctNum, string name, double initialBalance);

  // accesors
  string get_Name();
  int get_AcctNumber();
  double get_Balance();

  // function
  void deposit(double amount);

  // pure virtual functions
  virtual void withdraw(double amount) = 0;
  virtual void printStatement() = 0;

  // virtual function
  virtual void printSummary()
  {
		// formats the output correctly
		  cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
		  cout << endl << setw(25) << "" << "Account Summary" << endl << endl;
		  cout << setw(25) << "Name:  " << m_Name << endl;
		  cout << setw(25) << "Account #:  " << m_AcctNumber << endl;
		  cout << setw(25) << "Current Balance: $" << m_Balance << endl;
  }

protected:
// variables
  string m_Name;
  int m_AcctNumber;
  double m_Balance;
};// end of abstract class
#endif // !H_bankAccount
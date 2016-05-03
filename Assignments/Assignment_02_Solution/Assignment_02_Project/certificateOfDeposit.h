//Chris Golpashin
//March 13 2016
//Assignment 02
//certificateOfDeposit.h

#ifndef H_certificateOfDeposit
#define H_certificateOfDeposit

#include "bankAccount.h"

class certificateOfDeposit : public bankAccount // inheriting bankAccount as public
{
public:
  // constructor
  certificateOfDeposit(int acctNum, string name, double initialBalance, int matMon);
  
  // functions
  void withdraw(double amount);
  void printSummary();
  void printStatement();

private:
  // variables
  double m_InterestRate;
  int m_MaturityMonths;
  int m_CurrentMonth;
}; // end of class
#endif // !H_certificateOfDeposit
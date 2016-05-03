//Chris Golpashin
//March 13 2016
//Assignment 02
//serviceChargeChecking.h

#ifndef H_serviceChargeChecking
#define H_serviceChargeChecking

#include "checkingaccount.h"

class serviceChargeChecking :
  public checkingAccount // inherits checkingAccount as public
{
public:
  // constructor
  serviceChargeChecking(int acctNum, string name, double initialBalance);
  
  // functions
  void writeCheck(double amount);
  void printSummary();
};
#endif // !H_serviceChargeChecking
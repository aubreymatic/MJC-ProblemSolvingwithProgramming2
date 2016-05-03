//Chris Golpashin
//March 13 2016
//Assignment 02
//testAccounts.cpp

#include <iostream>
#include <iomanip>
#include <string>

#include "bankAccount.h"
#include "checkingAccount.h"
#include "serviceChargeChecking.h"
#include "noServiceChargeChecking.h"
#include "highInterestChecking.h"
#include "savingsAccount.h"
#include "highInterestSavings.h"
#include "certificateOfDeposit.h"

using namespace std;

void TestCheckingWithService()
{
  serviceChargeChecking acct(123,"John Doe", 1000); // creates a object from serviceChargeChecking

  char input=0; // user input
  double amount; // user money amount
  cout << "\t\tTesting Checking with Service Charge" << endl << endl;

  cout << "Current account overview:" << endl;
  acct.printSummary(); // calls printSummary of the objects class
  cout << endl;

  while (input != 'x') // loop will continue until user enters x to exit the program. users input will call the function of the objects parent's class if not x.
  {
    cout << "Select a transaction:" << endl;
    cout << "1 - Make a Withdrawal" << endl;
    cout << "2 - Make a Deposit" << endl;
    cout << "3 - Print Summary" << endl;
    cout << "4 - Print Monthly Statement" << endl;
    cout << "5 - Write a check" << endl;
    cout << "x - Exit Program" << endl;
    cout << "Enter choice: ";
    cin >> input;

    switch (input) // switch case to determine what the user wants to do.
    {
    case '1':
      cout << "Enter amount: ";
      cin >> amount;
      acct.withdraw(amount);
      break;
    case '2':
      cout << "Enter amount: ";
      cin >> amount;
      acct.deposit(amount);
      break;
    case '3':
      acct.printSummary();
      break;
    case '4':
      acct.printStatement();
      break;
    case '5':
      cout << "Enter amount: ";
      cin >> amount;
      acct.writeCheck(amount);
      break;
    case '6':
      break;
    case 'x':
      break;
    default:
      cout << "Invalid choice" << endl;
      break;
    }
    acct.printSummary();
    cout << endl;
  }
}

void TestCheckingNoService()
{
  noServiceChargeChecking acct(123,"John Doe", 1000); // creates a object from noServiceChargeChecking
  char input=0; // user input
  double amount; // user money amount
  cout << "\t\tTesting Checking without Service Charge" << endl << endl;

  cout << "Current account overview:" << endl;
  acct.printSummary(); // calls printSummary of the objects class
  cout << endl;

  while (input != 'x') // loop will continue until user enters x to exit the program. users input will call the function of the objects parent's class if not x.
  {
    cout << "Select a transaction:" << endl;
    cout << "1 - Make a Withdrawal" << endl;
    cout << "2 - Make a Deposit" << endl;
    cout << "3 - Print Summary" << endl;
    cout << "4 - Print Monthly Statement" << endl;
    cout << "5 - Write a check" << endl;
    cout << "x - Exit Program" << endl;
    cout << "Enter choice: ";
    cin >> input;

    switch (input) // switch case to determine what the user wants to do.
    {
    case '1':
      cout << "Enter amount: ";
      cin >> amount;
      acct.withdraw(amount);
      break;
    case '2':
      cout << "Enter amount: ";
      cin >> amount;
      acct.deposit(amount);
      break;
    case '3':
      acct.printSummary();
      break;
    case '4':
      acct.printStatement();
      break;
    case '5':
      cout << "Enter amount: ";
      cin >> amount;
      acct.writeCheck(amount);
      break;
    case '6':
      break;
    case 'x':
      break;
    default:
      cout << "Invalid choice" << endl;
      break;
    }
    acct.printSummary();
    cout << endl;
  }

}

void TestCheckingHighInterest()
{
  highInterestChecking acct(123,"John Doe", 1000); // creates a object from highInterestChecking

  char input=0; // user input
  double amount; // user money amount
  cout << "\t\tTesting Checking with High Interest" << endl << endl;

  cout << "Current account overview:" << endl;
  acct.printSummary(); // calls printSummary of the objects class
  cout << endl;

  while (input != 'x') // loop will continue until user enters x to exit the program. users input will call the function of the objects parent's class if not x.
  {
    cout << "Select a transaction:" << endl;
    cout << "1 - Make a Withdrawal" << endl;
    cout << "2 - Make a Deposit" << endl;
    cout << "3 - Print Summary" << endl;
    cout << "4 - Print Monthly Statement" << endl;
    cout << "5 - Write a check" << endl;
    cout << "x - Exit Program" << endl;
    cout << "Enter choice: ";
    cin >> input;

    switch (input) // switch case to determine what the user wants to do.
    {
    case '1':
      cout << "Enter amount: ";
      cin >> amount;
      acct.withdraw(amount);
      break;
    case '2':
      cout << "Enter amount: ";
      cin >> amount;
      acct.deposit(amount);
      break;
    case '3':
      acct.printSummary();
      break;
    case '4':
      acct.printStatement();
      break;
    case '5':
      cout << "Enter amount: ";
      cin >> amount;
      acct.writeCheck(amount);
      break;
    case '6':
      break;
    case 'x':
      break;
    default:
      cout << "Invalid choice" << endl;
      break;
    }
    acct.printSummary();
    cout << endl;
  }
}

void TestSavings()
{
  savingsAccount acct(123,"John Doe", 1000); // creates a object from savingsAccount

  char input=0; // user input
  double amount; // user money amount
  cout << "\t\tTesting Regular Savings" << endl << endl;

  cout << "Current account overview:" << endl;
  acct.printSummary(); // calls printSummary of the objects class
  cout << endl;

  while (input != 'x') // loop will continue until user enters x to exit the program. users input will call the function of the objects parent's class if not x.
  {
    cout << "Select a transaction:" << endl;
    cout << "1 - Make a Withdrawal" << endl;
    cout << "2 - Make a Deposit" << endl;
    cout << "3 - Print Summary" << endl;
    cout << "4 - Print Monthly Statement" << endl;
    cout << "x - Exit Program" << endl;
    cout << "Enter choice: ";
    cin >> input;

    switch (input) // switch case to determine what the user wants to do.
    {
    case '1':
      cout << "Enter amount: ";
      cin >> amount;
      acct.withdraw(amount);
      break;
    case '2':
      cout << "Enter amount: ";
      cin >> amount;
      acct.deposit(amount);
      break;
    case '3':
      acct.printSummary();
      break;
    case '4':
      acct.printStatement();
      break;
    case 'x':
      break;
    default:
      cout << "Invalid choice" << endl;
      break;
    }
    acct.printSummary();
    cout << endl;
  }
}

void TestSavingsHighInterest()
{
  highInterestSavings acct(123,"John Doe", 8000); // creates a object from highInterestSavings

  char input=0; // user input
  double amount; // user money amount
  cout << "\t\tTesting High Interest Savings" << endl << endl;

  cout << "Current account overview:" << endl;
  acct.printSummary(); // calls printSummary of the objects class
  cout << endl;

  while (input != 'x') // loop will continue until user enters x to exit the program. users input will call the function of the objects parent's class if not x.
  {
    cout << "Select a transaction:" << endl;
    cout << "1 - Make a Withdrawal" << endl;
    cout << "2 - Make a Deposit" << endl;
    cout << "3 - Print Summary" << endl;
    cout << "4 - Print Monthly Statement" << endl;
    cout << "x - Exit Program" << endl;
    cout << "Enter choice: ";
    cin >> input;

    switch (input) // switch case to determine what the user wants to do.
    {
    case '1':
      cout << "Enter amount: ";
      cin >> amount;
      acct.withdraw(amount);
      break;
    case '2':
      cout << "Enter amount: ";
      cin >> amount;
      acct.deposit(amount);
      break;
    case '3':
      acct.printSummary();
      break;
    case '4':
      acct.printStatement();
      break;
    case 'x':
      break;
    default:
      cout << "Invalid choice" << endl;
      break;
    }
    acct.printSummary();
    cout << endl;
  }
}

void TestCertificateOfDeposit()
{
  certificateOfDeposit acct(123,"John Doe", 10000, 6); // creates a object from certificateOfDeposit

  char input=0; // user input
  double amount; // user money amount
  cout << "\t\tTesting High Interest Savings" << endl << endl;

  cout << "Current account overview:" << endl;
  acct.printSummary(); // calls printSummary of the objects class
  cout << endl;

  while (input != 'x') // loop will continue until user enters x to exit the program. users input will call the function of the objects parent's class if not x.
  {
    cout << "Select a transaction:" << endl;
    cout << "1 - Make a Withdrawal" << endl;
    cout << "2 - Make a Deposit" << endl;
    cout << "3 - Print Summary" << endl;
    cout << "4 - Print Monthly Statement" << endl;
    cout << "x - Exit Program" << endl;
    cout << "Enter choice: ";
    cin >> input;

    switch (input) // switch case to determine what the user wants to do.
    {
    case '1':
      cout << "Enter amount: ";
      cin >> amount;
      acct.withdraw(amount);
      break;
    case '2':
      cout << "Enter amount: ";
      cin >> amount;
      acct.deposit(amount);
      break;
    case '3':
      acct.printSummary();
      break;
    case '4':
      acct.printStatement();
      break;
    case 'x':
      break;
    default:
      cout << "Invalid choice" << endl;
      break;
    }
    acct.printSummary();
    cout << endl;
  }
}

int main()
{
  char input; // user's input
  cout << "\t\tWelcome to the testing Bank" << endl << endl;

  cout << "WWhich account do you want?" << endl;
  cout << "1 - Checking with Service Charge" << endl;
  cout << "2 - Checking without Service Charge" << endl;
  cout << "3 - Checking with High Interest" << endl;
  cout << "4 - Savings" << endl;
  cout << "5 - Savings with High Interest" << endl;
  cout << "6 - Certificate of Deposit" << endl;
  cout << "Enter choice: ";
  cin >> input;

  switch (input) // switch case to determine which account type the user wants
  {
  case '1':
    TestCheckingWithService();
    break;
  case '2':
    TestCheckingNoService();
    break;
  case '3':
    TestCheckingHighInterest();
    break;
  case '4':
    TestSavings();
    break;
  case '5':
    TestSavingsHighInterest();
    break;
  case '6':
    TestCertificateOfDeposit();
    break;
  default:
    cout << "Invalid choice" << endl;
    break;
  }
}
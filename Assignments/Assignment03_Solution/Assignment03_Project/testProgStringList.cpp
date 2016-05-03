/*
Chris Golpashin
Assignment 03


testProgStringList.cpp
*/

#include <iostream>
#include <string>
#include "unorderedArrayListType.h"

using namespace std;
 
int main() 
{ 
    unorderedArrayListType<string> stringList(25);  //Line 1

    string str;                                     //Line 2

    cout << "List 3: Enter 5 strings: ";            //Line 3

    for (int count = 0; count < 5; count++)         //Line 4
    {
        cin >> str;                                 //Line 5
        stringList.insertEnd(str);                  //Line 6
    }

    cout << endl;                                   //Line 7

    cout << "Line 8: stringList: ";                 //Line 8
    stringList.print();                             //Line 9
    cout << endl;                                   //Line 10

    cout << "Line 11: Enter the string to be " 
         << "deleted: ";                            //Line 11
    cin >> str;                                     //Line 12
    cout << endl;                                   //Line 13

    stringList.remove(str);                         //Line 14
    cout << "Line 15: After removing " << str
         << " stringList: ";                        //Line 15
    stringList.print();                             //Line 16
    cout << endl;                                   //Line 17
 
    cout << "Line 18: Enter the search item: ";     //Line 18

    cin >> str;                                     //Line 19
    cout << endl;                                   //Line 20

    if (stringList.seqSearch(str) != -1)            //Line 21
        cout << "Line 22: " << str 
             << " found in stringList." << endl;    //Line 22
    else                                            //Line 23
        cout << "Line 24: " << str 
             << " is not in stringList." << endl;   //Line 24

	cout << endl;
	cout << "Checking if the list is empty" << endl;

	stringList.isEmpty();

	cout << endl;
	cout << "Checking if the list is full." << endl;
	cout << endl;
	stringList.isFull();
	cout << endl;

	cout << "Here is the current list size." << endl;
	stringList.listSize();									  
	cout << endl;

	cout << "Here is the max list size." << endl;
	stringList.maxListSize();
	cout << endl;

	cout << "Clearing the list." << endl;
	stringList.clearList();
	cout << endl;

	// couldn't get this to work properly I think.
	cout << "Inserting a new string.";
	cout << endl;
	stringList.insertAt(0, str);
	cout << "Please enter a string.";
	cout << endl;
	cin >> str;
	stringList.print();

	cout << "Testing replaceAt function." << endl;
	cout << "Please enter a string." << endl;
	cin >> str;
	stringList.replaceAt(0, str);
	stringList.print();

	cout << "End of program." << endl;
    return 0;    
}

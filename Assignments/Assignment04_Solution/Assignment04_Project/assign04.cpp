/*
Chris Golpashin
Assignment 04
April 10 2016

assign04.cpp
Modifying the existing code to implement divideMid and divideAt
*/

#include <iostream>
#include <string>
#include "linkedList.h"
#include "unorderedLinkedList.h"

using namespace std;

int main()
{
	unorderedLinkedList<int> list, subList;

	int num;
	int yesNo;
	int divideAtPlace;

		cout << "Enter as many numbers you want but use -999 as the last number to stop" << endl;
		cin >> num;

		while (num != -999)
		{
			list.insertLast(num);
			cin >> num;
		}

		cout << endl;

		cout << "List: ";
		list.print();
		cout << endl;
		cout << "Length of the list: " << list.length() << endl;

		list.divideMid(subList);

		cout << "Do you want to divideMid or divideAt" << endl;
		cout << "Enter 1 for divideMid or 2 for divideAt." << endl;
		cin >> yesNo;

		if (yesNo == 1){ // DivideMid
			list.divideMid(subList); // calling function and sending it a variable

			cout << "Lists after splitting list" << endl;

			cout << "list: ";
			list.print();
			cout << endl;

			// returns the length of the list and corrects issue with division.
			if (list.length() % 2 == 0)
			{
				cout << "Length of the list: " << (list.length() / 2) << endl;
			}
			else
			{
				cout << "Length of the list: " << (list.length() / 2 + 1) << endl;
			}

			cout << "sublist: ";
			subList.print();
			cout << endl;
			cout << "Length of subList: " << (subList.length()) << endl;
		}
		else if (yesNo == 2){ // DivideAt
			cout << "Where do you you want the list to divide at?" << endl;
			cout << "The number you enter has to be a part of the current list." << endl;
			cout << "Also the number you enter will be the start of the subList." << endl;
			cout << "Enter your number." << endl;
			cin >> divideAtPlace;

			list.divideAt(subList, divideAtPlace); // calling function and sending the value

			cout << "Lists after dividing at" << endl;

			cout << "list: ";
			list.print();
			cout << endl;
			cout << "Length of the list: " << list.length() << endl;

			cout << "sublist: ";
			subList.print();
			cout << endl;
			cout << "Length of subList: " << (subList.length()) << endl;
		}
		else{
			cout << "Please only use 1 or 2 to choose between the two functions." << endl;
		}

	return 0;
}
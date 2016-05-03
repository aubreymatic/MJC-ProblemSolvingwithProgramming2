/*
CSCI 272
Linked Lists
2016-03-14

*/

#include <iostream>

using namespace std;

struct nodeType
{
	int info;
	nodeType *link;
};



int main()
{
	nodeType *head; // declare a node - only its label
	head = new nodeType; // creates memory space

	// initialize node
	head->info = 25;
	head->link = NULL;

	// output
	cout << head->info << endl;
	cout << head->link << endl;

	// create new node for list
	nodeType *temp = new nodeType;
	temp->info = 56;
	temp->link = NULL;

	head->link = temp;


	return 0;
}// end main
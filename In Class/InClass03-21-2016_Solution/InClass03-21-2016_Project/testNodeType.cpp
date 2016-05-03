/*


*/

#include <iostream>
#include "nodeType.h"

using namespace std;

int main()
{
	nodeType *list; // beginning of linked list
	nodeType *temp = nullptr; // temporary pointer
	nodeType *current = nullptr;
	nodeType *trail = nullptr;
	nodeType *last = nullptr; // pointer to end of list;

	list = nullptr; // list is empty

	// first node
	list = new nodeType; // create first node
	list->info = 75;
	list->link = nullptr;
	last = list; // last element of list

	// next node
	temp = new nodeType;
	temp->info = 35;
	temp->link = nullptr;
	last->link = temp; // connect node to end of list
	last = temp; // point to last element

	// 3rd node
	temp = new nodeType;
	temp->info = 86;
	temp->link = nullptr;
	last->link = temp; // connect node to end of list
	last = temp; // point to last element
	
	// 4th node
	temp = new nodeType;
	temp->info = 10;
	temp->link = nullptr;
	last->link = temp; // connect node to end of list
	last = temp; // point to last element

	// 5th element
	temp = new nodeType;
	temp->info = 50;
	temp->link = nullptr;
	last->link = temp; // connect node to end of list
	last = temp; // point to last element

	// 6th element
	temp = new nodeType;
	temp->info = 28;
	temp->link = nullptr;
	last->link = temp; // connect node to end of list
	last = temp; // point to last element

	// 7th element
	temp = new nodeType;
	temp->info = 65;
	temp->link = nullptr;
	last->link = temp; // connect node to end of list
	last = temp; // point to last element
	
	// 8th element
	temp = new nodeType;
	temp->info = 39;
	temp->link = nullptr;
	last->link = temp; // connect node to end of list
	last = temp; // point to last element

	// data is in linked list now

	// print linked list with traversal
	current = list; // current points at beginning of list
	while (current != nullptr) // not at end of list
	{
		cout << current->info << " ";
		current = current->link;
	}
	cout << endl;

	// traversing list adding appropiate pointers for list
	current = list; // current points at beginning of list
	while (current != nullptr) // not at end of list
	{
		if (current->info == 86) // temp points to 86
			temp = current;
		if (current->info == 65) // trail points to 65
			trail = current;
		current = current->link;
	}// end while traversal
	current = list; // current points to 75

	// problem 6
	cout << "6a. " << current->info << endl;
	current = current->link;
	cout << "6b. " << current->info << endl;
	cout << "6c. " << temp->link->link->info << endl;
	trail->link = nullptr;
	cout << "6d. " << trail->info << endl;
	cout << "63. " << last->link->info << endl;
	return 0;
}
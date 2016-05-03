

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

	// initalize node
	head->info = 25;
	head->link = NULL; // since there is only one node, do this.

	// output
	cout << "info: " << head->info << endl;
	cout << "link: " << head->link << endl;

	// create a new node for list
	nodeType *temp = new nodeType;
	temp->info = 56;
	temp->link = NULL;

	head->link = temp;

	return 0;
}
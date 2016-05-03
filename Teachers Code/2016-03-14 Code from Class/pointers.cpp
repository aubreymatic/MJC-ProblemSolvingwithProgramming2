/*
CSCI 272
Pointers
2016-03-14

*/

#include <iostream>

using namespace std;

int main()
{
	int x; // standard variable
	int *p; // pointer variable

	x = 25;

	cout << "x: " << x << endl;
	cout << "&x: " << &x << endl;

	p = &x;

	cout << "&p: " << &p << endl;
	cout << "p: " << p << endl;
	cout << "*p: " << *p << endl;

	// deallocate pointer memory
	delete p;

	return 0;
}// end main
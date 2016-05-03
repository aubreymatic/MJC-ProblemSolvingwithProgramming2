
#include <iostream>

using namespace std;

int main()
{
	int x;
	int *p;

	x = 25;
	p = &x;
	*p = x;

	cout << "x; " << x << endl;
	cout << "&x: " << &x << endl;

	cout << "&p: " << &p << endl;
	cout << "p: " << p << endl;
	cout << "*p: " << *p << endl;

	// deallocate pointer memory
	delete p;

	return 0;
}
/*
CSCI 272-5527
2016-03-02 Wed
Recursion


*/

#include <iostream>
using namespace std;

// recursive function that returns the factorial of n
// pre-condition: n is >= 0
// post- condition: returns value of n!
int fact(int n)
{
	if (n == 0) // base case
		return 1;
	else
		return n * fact(n - 1);
}// end fact

// recursive combination function (r <= n)
// r and n >= 0
int comb(int n, int r)
{
	if (n == r) // base case
		return 1;
	else
		return
		comb(n - 1, r - 1) +
		comb(n - 1, r);
}// end comb



int main()
{

	return 0;
}// end main

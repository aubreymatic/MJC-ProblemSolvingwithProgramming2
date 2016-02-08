//Implementation File for the class clockType
 
#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "die.h"

using namespace std;

die::die()
{
    num = 1;	    // initialize die to 1
    srand(time(0)); // seed the random # function
}

void die::roll()
{
    num = rand() % 6 + 1; // random number btw 1 and 6
}

int die::getNum() const
{
    return num;
}

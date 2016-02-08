
//Implementation File for the class circleType
 
#include <iostream>
#include "circleType.h"

using namespace std;

void circleType::setRadius(double r)
{
    if (r >= 0)
        radius = r;
    else
        radius = 0;
}

double circleType::getRadius()
{
    return radius;
}

double circleType::area()
{
    return 3.1416 * radius * radius;
}

double circleType::circumference()
{
    return 2 * 3.1416 * radius;
}

void circleType::printCircleProperties() 
{
	cout << "Radius: " << circleType::getRadius() << " feet." << endl << endl;
	cout << "Area: " << circleType::area() << " square feet." << endl << endl;
	cout << "Circumference: " << circleType::circumference() << " feet." << endl << endl;
}

circleType::circleType(double r)
{
    setRadius(r);
}

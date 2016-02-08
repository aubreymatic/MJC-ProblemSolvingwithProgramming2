/*
Implementation C++ file for cylinderType
*/

#include "cylinderType.h"
#include <iostream>

using namespace std;

static const double PI = 3.1416;

// accessor
double cylinderType::getHeight() 
{ 
	return height; 
}

double cylinderType::getRadius() {

	return circleType::getRadius();
}

// mutator
void cylinderType::setDimensions(double r, double h)
{
	circleType::setRadius(r);

	if (h >= 0)
		height = h;
	else
		height = 0.0;
}

// constructor
cylinderType::cylinderType() :circleType(0.0)
{
	height = 0.0;
	volume = 0.0;
	surfaceArea = 0.0;
}

// other
void cylinderType::volumeOfCylinder()
{
	volume = PI * (circleType::getRadius() * circleType::getRadius() * height);
}

void cylinderType::surfaceAreaOfCylinder()
{
	surfaceArea = 2 * (PI * circleType::getRadius() * height) +
		2 * (PI * circleType::getRadius() * circleType::getRadius());
}

void cylinderType::printVolume()
{
	cout << "The volume of the cylinder is: ";
	cout << volume << " cubic feet." << endl << endl;
}

void cylinderType::printSurfaceArea() 
{

	cout << "The surface area of the cylinder is: ";
	cout << surfaceArea << " square feet." << endl << endl;
}
/*
Chris Golpashin
Assignment 1
Due 2/7/2016

Problem:
I need to make a derived class that adds functions and variables for calculating a cylinder. I cannot make
any eddits to the base class. The new derived class must calculate the volume, surface area, and print out 
these values with print functions that were added using the derived class

Solution:
I will need three private variables for storing the height, volume, and surface area. I will need
7 functions to carry out the tasks of the class. two print functions to output the results, but the third
print function is already created in the base class. I also need two functions to calculate the volume
and surface area of the cylinder. These functions are borrowing the functions of the base class. The get 
functions gets the height when the function is called/ The set functions uses the values that
were gotten from the get functions and stores them into the private variables.

*/

#include "circleType.h" // including the class that this class was derived from.

// start of class
class cylinderType : public circleType
{
public:
	// accessor
	// obtains the height and radius
	double getHeight();
	double getRadius();

	// mutator
	void setDimensions(double r, double h);// sets radius and height

	// cunstructor
	cylinderType();
	// default cunstructor with no parameters

	// other
	void volumeOfCylinder();// function to calculate the volume of the cylinder
	void surfaceAreaOfCylinder();// function to calculate the surface area of the cylinder
	void printVolume();// function to print the volume of the cylinder
	void printSurfaceArea();// function to print the surface area of the cylinder

private:
	// variables for storing the values
	double height;
	double volume;
	double surfaceArea;
};// end of class
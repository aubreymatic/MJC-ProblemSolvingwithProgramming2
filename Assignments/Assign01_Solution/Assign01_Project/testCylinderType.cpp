/*
Testing C++ file for the created derived class.
*/

// including standard C++ libraries
#include <iostream>
#include <iomanip>
#include "cylinderType.h" // including the cylinderType header file

using namespace std;

int main()
{
	cout << fixed << showpoint << setprecision(2); // sets the decimal point and does rounding

	cylinderType myCylinder; // creating an object called myCylinder from the cylinderType class

	// creating and assigning variables for the cylinders properties
	double cylinRadius = 0.0;
	double cylinHeight = 0.0;

	// asking the user for input material for the two double variables
	cout << "Please enter the radius (in feet) of the cylinder: ";
	cin >> cylinRadius;
	cout << endl << endl;

	cout << "Please enter the height (in feet) of the cylinder: ";
	cin >> cylinHeight;
	cout << endl << endl;

	// calling and pushing the two variables into the function.
	myCylinder.setDimensions(cylinRadius, cylinHeight);

	// calculating the volume and surface area of the cylinder
	myCylinder.volumeOfCylinder();
	myCylinder.surfaceAreaOfCylinder();

	// calling the print functions to display the calculated results
	myCylinder.printVolume();
	myCylinder.printSurfaceArea();

	// calling function to print the values of the circle that was calculated.
	cout << "The properties of the base of the cylinder are as follows: " << endl << endl;
	myCylinder.printCircleProperties();

	return 0;
}// end of main
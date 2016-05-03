#ifndef H_DOCTORTYPE
#define H_DOCTORTYPE

#include "doctorType.h"
#include <iostream>
#include <string>

using namespace std;

// Accesor
string doctorType::getSpecialty()
{

	return speciality;
}

// Mutator
void doctorType::setSpecialty()
{
	speciality = newSpecialty;
}

// Constructor
doctorType::doctorType(string first = "", string last = "", string spec = "") // default constructor
{
	speciality = spec;
	personType::personType(first, last); // calling the default constructor of the base class of personType
}

// Other
void doctorType::print()
{
	personType::print(); // calling the print functions of the base class of personType
	// then add specialty
	cout << " " << speciality;
	// prints out the firstName LastName specialty
}

#endif // end ifndef
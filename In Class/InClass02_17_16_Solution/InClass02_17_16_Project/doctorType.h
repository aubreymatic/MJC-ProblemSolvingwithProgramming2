#include "personType.h"
#include <string> // because personType uses strings for variables

class doctorType : public personType
{
public:
	// Accesor
	string getSpecialty();

	// Mutator
	void setSpecialty();

	// Constructor
	doctorType(string first, string last, string spec); // default constructor

	// Other
	void print();
private:
	string speciality; // Variable to store the doctors specialty
};// end doctorType
//Test Program personType
 
#include <iostream>  
#include <string>
#include "personType.h" 
#include "doctorType.h"
 
using namespace std;

int main()
{
    personType student("Lisa", "Regan");
	doctorType myDoctor();
	cout << "My doctor is: ";
	

    student.print();

    cout << endl;

    return 0;
}
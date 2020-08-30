#include "student.h"
#include "undergrad.h"

#include <iostream>

void Undergrad::displayInfo()
{
	cout << endl << "Undergrad student: " << getName() << endl;
	cout << "Roll number: " << getRollNo() << endl << endl;
	cout << "Number of Credits: " << getCredits() << endl << endl;
}
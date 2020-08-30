#ifndef _UNDERGRAD_H
#define _UNDERGRAD_H

class Undergrad : public Student
{

public:
	Undergrad(string studentName, int studentRollNo, int numOfCredits, studentType studentLevel) : 
		Student(studentName, studentRollNo, numOfCredits, studentLevel){}

	void displayInfo();
};
#endif // _UNDERGRAD_H
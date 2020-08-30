#ifndef _GRAD_H_
#define _GRAD_H_

class Grad : public Student
{
public:
	Grad(string studentName, int studentRollNo, int numOfCredits, studentType studentLevel) : 
		Student(studentName, studentRollNo, numOfCredits, studentLevel){}
	void displayInfo();
};
#endif // _GRAD_H_


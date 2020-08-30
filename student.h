#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <string>
using namespace std;

enum studentType { undergrad = 0, grad };	// definition of studentType

class Student {
private:
// private local variables
	string name; 
	int rollNo;
	int credits;
	studentType level;
public:
	Student()
	{
		this->name = "";
		this->rollNo = 0;
		this->credits = 0;
		this->level == 0;
	}
	Student(string studentName, int studentRollNo, int numOfCredits, studentType studentLevel); // constructor

	// accessor methods
	string getName();
	int getRollNo();
	studentType getstudentType();
	// Add member function getCredits() that returns credits.
	int getCredits();

	virtual void displayInfo(){}
	friend void changeRollNo(Student* student, int rollNo_input);

	//	Add declaration of operator+ overloaded functions in Student class.
	int operator+(Student* st);
	int operator+(int st_cr);

	//	Add declaration of operator= overloaded function
	Student& operator=(const Student &st_cr);
};
#endif // _STUDENT_H_


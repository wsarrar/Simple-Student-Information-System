#include "student.h"

Student::Student(string studentName, int studentRollNo, int numOfCredits, studentType type)
{
	name = studentName;
	rollNo = studentRollNo;
	credits = numOfCredits;
	level = type;
}

string Student::getName()
{
	return name;
}

int Student::getRollNo()
{
	return rollNo;
}

int Student::getCredits()
{
	return credits;
}

studentType Student::getstudentType()
{
	return level;
}

// project7
// Q2.1 define two operator+ overloaded functions here [5]
int Student::operator+(Student *st)
{
	int result = getCredits() + st->getCredits();
	return result;
}
int Student::operator+(int st_cr)
{
	int result = st_cr + getCredits();
	return result;
}

// project7
// Q3.1 define  operator= overloaded function here [10]
Student &Student::operator=(const Student &st)
{
	name = st.name;
	rollNo = st.rollNo;
	credits = st.credits;
	level = st.level;
	return *this;
}
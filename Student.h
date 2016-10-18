#pragma once
#include <iostream>
using namespace std;

class student {
private:
	int studentID;
	double labs[5];
	double exam;
	double finalGrade;
	static int numStudents;

public:
	student();
	void readMarks();
	void printFinalGrade();
};


#include "stdafx.h"
#include "Student.h"

using namespace std;

int student::numStudents = 0;


student::student() {

	double exam = 0;
	for (int i = 0; i < 5; i++) {
		labs[i] = 0;
	}
	studentID = numStudents;
	numStudents++;
	

}

void student::readMarks() {
	double lab_mark;
	cout << "Student ID: " << studentID << endl;
	cout << "Input exam mark: " << endl;
	cin >> exam;
	cout << "Input all 5 lab marks" << endl;
	for (int m = 0; m < 5; m++) {
		cin >> lab_mark;
		labs[m] = lab_mark;
	}

}

void student::printFinalGrade() {
	double avg_lab;
	double total_lab;

	total_lab = labs[0] + labs[1] + labs[2] + labs[3] + labs[4];

	avg_lab = total_lab*0.2;
	cout << avg_lab;

	finalGrade = (avg_lab*0.4) + (exam*0.6);
	cout << "Final Grade: " << finalGrade << endl;
}

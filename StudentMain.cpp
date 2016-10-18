// StudentMain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
	student student_array[5];

	for (int i = 0; i < 5; i++)
	{
		student_array[i].readMarks();
		student_array[i].printFinalGrade();
	}


	return 0;
}

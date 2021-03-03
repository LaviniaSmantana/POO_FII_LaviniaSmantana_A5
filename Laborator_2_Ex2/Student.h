#pragma once
class Student
{
	char my_name[20]; 
	int grade_M, grade_E, grade_H, average_grade;
	
public:
	void setName(char* my_name);

	char* getName(); 

	void setMath(int grade_M);

	int getMath();

	void setEnglish(int grade_E);

	int getEnglish();

	void setHistory(int grade_H);

	int getHistory();

	void setAverage(int average_grade);

	int getAverage(); 

};


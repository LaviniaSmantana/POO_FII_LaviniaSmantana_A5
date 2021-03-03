#include "Student.h"
#include <string.h>
void Student::setName(char my_name[20]) {
	strcpy_s(this->my_name, 20, my_name);
}
char* Student::getName() {
	return this->my_name;
}

void Student::setMath(int grade_M) {
	this->grade_M = grade_M;
}
int Student::getMath() {
	return this->grade_M;
}

void Student::setEnglish(int grade_E) {
	this->grade_E = grade_E;
}
int Student::getEnglish() {
	return this->grade_E;
}

void Student::setHistory(int grade_H) {
	this->grade_H = grade_H;
}
int Student::getHistory() {
	return this->grade_H;
}

void Student::setAverage(int average_grade) {
	this->average_grade = average_grade;
}
int Student::getAverage() {
	return this->average_grade;
}
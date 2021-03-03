#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Student.h"
using namespace std;
int comparare_nume(Student A, Student B)
{
	if (strcmp(A.getName(), B.getName()) > 0)
		return 1;
	if (strcmp(A.getName(), B.getName()) < 0)
		return -1;
	return 0;
}
int comparare_mate(Student A, Student B)
{
	if (A.getMath() > B.getMath())
		return 1;
	if (A.getMath() < B.getMath())
		return -1;
	return 0;
}
int comparare_engleza(Student A, Student B)
{
	if (A.getEnglish() > B.getEnglish())
		return 1;
	if (A.getEnglish() < B.getEnglish())
		return -1;
	return 0;
}
int comparare_istorie(Student A, Student B)
{
	if (A.getHistory() > B.getHistory())
		return 1;
	if (A.getHistory() < B.getHistory())
		return -1;
	return 0;
}
int comparare_medie(Student A, Student B)
{
	if (A.getAverage() > B.getAverage())
		return 1;
	if (A.getAverage() < B.getAverage())
		return -1;
	return 0;
}
int main()
{
	Student S1;
	Student S2;

	S1.setName((char *) "Student 1");
	S1.setMath(6);
	S1.setEnglish(9);
	S1.setHistory(10);
	S1.setAverage((6 + 9 + 10) / 3);

	S2.setName((char *) "Student 2");
	S2.setMath(9);
	S2.setEnglish(8);
	S2.setHistory(10);
	S2.setAverage((9 + 8 + 10) / 3);
	
	printf("S1 -> Nume: %s | Mate: %d | Engleza: %d | Istorie: %d | Media: %d \n\n", S1.getName(), S1.getMath(), S1.getEnglish(), S1.getHistory(), S1.getAverage());
	printf("S2 -> Nume: %s | Mate: %d | Engleza: %d | Istorie: %d | Media: %d \n\n", S2.getName(), S2.getMath(), S2.getEnglish(), S2.getHistory(), S2.getAverage());
	
	int nume, mate, engleza, istorie, medie;
	nume = comparare_nume(S1, S2); 
	mate = comparare_mate(S1, S2);
	engleza = comparare_engleza(S1, S2);
	istorie = comparare_istorie(S1, S2);
	medie = comparare_medie(S1, S2);

	printf("--------------------------COMPARARE STUDENTI--------------------------\n\n");
	printf("Nume: %d  |  Mate: %d  |  Engleza: %d  |  Istorie: %d  |  Medie: %d  \n\n", nume, mate, engleza, istorie, medie);
	system("pause");
	return 0;
}
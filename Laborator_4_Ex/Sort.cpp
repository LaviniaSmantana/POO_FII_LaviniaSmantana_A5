#include "Sort.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdarg.h>
#include <cstring>

Sort::Sort() {
	this->vector = nullptr;
	this->Nr_Elemente = 0;
}

Sort::Sort(int Nr_Elemente) {

	this->vector= (int*)(malloc(Nr_Elemente * sizeof(int)));
}

Sort::Sort(int Nr_Elemente, int Minim, int Maxim) {

	size = Nr_Elemente;
	vector = new int[size];
	time_t t;
	srand((unsigned)time(&t));
	for (i = 0; i < Nr_Elemente; i++)
		vector[i] = Minim + rand() % (Maxim - Minim + 1);
}

Sort::Sort(int* v, int Nr_Elemente) {

	size = Nr_Elemente;
	vector = new int[size];
	for (i = 0; i < Nr_Elemente; i++)
		vector[i] = v[i];
}

Sort::Sort(int count, ...) {

	size = count;
	vector = new int[size];

	va_list vl;
	va_start(vl, count);
	for (i = 0; i < count; i++)
	{
		vector[i] = va_arg(vl, int);
	}
	va_end(vl);
}

Sort::Sort(char* string) {

	char* p; p = strtok(string, ",");
	size = strlen(string) + 1;
	vector = new int[size];

	while (p)
	{
		char* x; int counter = 0;
		x = new char[strlen(p) + 1];
		strcpy(x, p);
		int nr = 0;
		for (i = 0; i < strlen(x); i++)
		{
			nr = nr * 10 + (x[i] - '0');
		}
		vector[counter++] = nr;
		p = strtok(NULL, ",");
	}
}

void Sort::BubbleSort() {

	int ok = 1;
	while (ok)
	{
		for (i = 0; i < Nr_Elemente; i++)
		{
			if (vector[i] > vector[i + 1])
			{
				aux = vector[i];
				vector[i] = vector[i + 1];
				vector[i + 1] = aux;
			}
		}
	}
}

void Sort::Print() {

	if (this->vector != nullptr)
	{
		for (i = 0; i < this->Nr_Elemente; i++)
		{
			printf("%d", this->vector[i]);
			printf(" ");
		}
		printf("\n\n");
	}
	else printf("VECTOR = NULLPTR\n");
}
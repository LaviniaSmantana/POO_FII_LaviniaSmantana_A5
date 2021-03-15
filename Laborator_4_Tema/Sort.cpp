#define _CRT_SECURE_NO_WARNINGS

#include "Sort.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdarg.h>
#include <string.h>

Sort::Sort(int Nr_Elemente) {

	this->vector= (int*)(malloc(Nr_Elemente * sizeof(int)));
}

Sort::Sort(int Nr_Elemente, int Minim, int Maxim) {

	this->Nr_Elemente = Nr_Elemente;
	size = Nr_Elemente;
	vector = new int[size];
	time_t t;
	srand((unsigned)time(&t));
	for (i = 0; i < Nr_Elemente; i++)
		this->vector[i] = Minim + rand() % (Maxim - Minim + 1);
}

Sort::Sort(int* v, int Nr_Elemente) {

	this->Nr_Elemente = Nr_Elemente;
	size = Nr_Elemente;
	vector = new int[size];
	for (i = 0; i < Nr_Elemente; i++)
		this->vector[i] = v[i];
}

Sort::Sort(int count, ...) {

	this->Nr_Elemente = count;
	size = count;
	vector = new int[size];

	va_list vl;
	va_start(vl, count);
	for (i = 0; i < count; i++)
	{
		this->vector[i] = va_arg(vl, int);
	}
	va_end(vl);
}

Sort::Sort(char* string) {

	strcpy(this->string, string);
	this->Nr_Elemente = 0;
	size = strlen(string) + 1;
	vector = new int[size];

	char* p; i = 0; int x;
	p = strtok(string, ",");
	
	while (p != NULL)
	{
		Nr_Elemente++;
		this->vector = (int*)realloc(this->vector, Nr_Elemente * sizeof(int));
		x = atoi(p);
		vector[i++] = x;
		p = strtok(NULL, ",");
	}
}

Sort::Sort(): vector(new int[count]{ 1, 2, 3, 4, 5 }) {
	
	this->Nr_Elemente = count;
}


void Sort::BubbleSort() {

	for (i = 0; i < Nr_Elemente - 1; i++)
		for (j = i+1; j < Nr_Elemente; j++)
			if(vector[i]>vector[j])
			{
				aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
			}
}

void Sort::InsertSort() {

	for (i = 0; i < Nr_Elemente; i++)
	{
		x = vector[i];
		j = i - 1;
		while (j >= 0 && vector[j] > x)
		{
			vector[j + 1] = vector[j];
			j--;
		}
		vector[j + 1] = x;
	}
}

int partition(int vector[], int low, int high)
{
	int pivot, i, j, aux;
	pivot = vector[high];
	i = (low - 1);
	for (j = low; j <= high - 1; j++)
	{
		if (vector[j] < pivot)
		{
			i++;
			aux = vector[i];
			vector[i] = vector[j];
			vector[j] = aux;
		}
	}
	aux = vector[i + 1];
	vector[i + 1] = vector[high];
	vector[high] = aux;
	return (i + 1);
}

void Sort::QuickSort(int* vector, int low, int high) {

	if (low < high)
	{
		int pi = partition(vector, low, high);
		QuickSort(vector, low, pi - 1);
		QuickSort(vector, pi + 1, high);
	}
}

int Sort::GetElementsCount() {

	return Nr_Elemente;
}

int Sort::GetElementFromIndex(int index) {

	if (index >= 0 && index < Nr_Elemente)
		return vector[index];
	else return -1;
}

void Sort::Print() {

		for (i = 0; i < Nr_Elemente; i++)
		{
			printf("%d", vector[i]);
			printf(" ");
		}
		printf("\n");

}
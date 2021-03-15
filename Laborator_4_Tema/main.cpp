#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Sort.h"
using namespace std;

int main()
{
	int n = 6; // pentru lista
	printf("V1 Constructor from random values:  ");
	Sort V1(10, 5, 20);
	V1.Print();

	printf("Bubble Sort:  ");
	V1.BubbleSort();
	V1.Print();

	printf("----------------------------------------------\n");

	printf("V2 Constructor from an existing vector:  ");
    int v2[5] = { 7,2,4,9,1 };
	Sort V2(v2, 5);
	V2.Print();
	printf("Quick Sort:  ");
	V2.QuickSort(v2, 0, 5);
	V2.Print();

	printf("----------------------------------------------\n");

	printf("V3 Constructor using variadic parameters:  ");
	Sort V3(n, 1, 4, 5, 2, 7, 8);
	V3.Print();
	printf("Insert Sort:  ");
	V3.InsertSort();
	V3.Print();
	printf("----------------------------------------------\n");

	printf("V4 Constructor from a string:  ");
	char c[] = "14,23,10,15";
	Sort V4(c);
	V4.Print();

	system("pause");
	return 0;
}
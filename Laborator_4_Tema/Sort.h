#pragma once

class Sort

{
    int* vector;
    int Nr_Elemente, Minim, Maxim, i, aux, x, j;
    int size, count, pivot, high, low;
    char* string;
public:

    Sort(int Nr_Elemente);

    Sort();

    Sort(int Nr_Elemente, int Minim, int Maxim);

    Sort(int* vector, int Nr_Elemente);

    Sort(int count, ...);

    Sort(char* string);

    void InsertSort();

    void QuickSort(int* vector, int low, int high);

    void BubbleSort();

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};


#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Template.h"
using namespace std;

int main()
{
	int i;
	VectorTemplate<int, 5> vector1;
	printf("INSERAM IN VECTOR ELEMENTELE DE LA 1 LA 5\n\n");
	for (i = 0; i < 5; i++)
		vector1.insert_element(i, i + 1);
	printf("VECTOR 1 : { 1, 2, 3, 4, 5 } \n\n");

	printf("COUNT METHOD : %d  ||  Numarul de elemente din vector \n\n", vector1.count_method());

	printf("STERGEM ELEMENTUL DE PE POZITIA 4 |-> V[4]=5\n\n");
	vector1.delete_element(4);  
	
	printf("COUNT METHOD : %d  ||  Numarul de elemente din vector \n\n", vector1.count_method());

	printf("AFISAM ULTIMUL ELEMENT DIN VECTOR, CARE ACUM ESTE 4\n");
	printf("pop vector: %d\n\n", vector1.pop_vector());

	printf("=========================================================================\n\n");		
	

	return 0;
}
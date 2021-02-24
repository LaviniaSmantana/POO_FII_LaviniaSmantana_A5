#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	printf("---------EXERCITIUL 2---------\n\n");
	FILE* fp; int x, suma = 0;
	fopen_s(&fp, "in.txt", "r");
	char string[200];
	while (fgets(string, 200, fp))
	{
		x = atoi(string);
		suma = suma + x;
	}
	printf("Suma este %d\n\n", suma);
	printf("------------------------------\n\n\n");





	printf("---------EXERCITIUL 3---------\n\n");

	char v[200][20], aux[20];
	int n = 0, i, j;
	
	printf("Numarul de cuvinte este: ");   // 6
	int nrcuvinte; 
	scanf_s("%d", &nrcuvinte, 200);
	printf("Propozitia initiala este: ");  // I went to the library yesterday
	char cuvant[200];
	
	while (scanf_s("%199s", cuvant, 199))
	{
		strcpy(v[n], cuvant);
		n++;
		if (n >= nrcuvinte)
			break;
	}
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
		{
			if (strlen(v[i]) < strlen(v[j]))
			{
				strcpy(aux, v[i]);
				strcpy(v[i], v[j]);
				strcpy(v[j], aux);
			}
			else if (strlen(v[i]) == strlen(v[j]))
			{
				if (strcmp(v[i], v[j]) > 0)
				{
					strcpy(aux, v[i]);
					strcpy(v[i], v[j]);
					strcpy(v[j], aux);
				}

			}
		}
	printf("\nPropozitia modificata este: \n\n");
	for (i = 0; i < n; i++)
	{
		printf("%s\n", v[i]);
	}
	printf("\n------------------------------\n\n\n");


	system("pause");
	return 0;
}

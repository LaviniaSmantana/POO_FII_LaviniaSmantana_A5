#include "NumberList.h"
#include <stdio.h>
#include <stdlib.h>
void Init()
{
	count = 0;

}
bool Add(int x)
{
	numbers[count] = x;
	count++;
	if (count >= 10) return 0;
	return 1;
}
void Sort()
{
	for(i=0; i<count-1; i++)
		for(j=i+1;j<count:j++)
			if (numbers[i] > numbers[j])
			{
				aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
}
void Print()
{
	printf("Vectorul sortat este: ");
	for (i = 0; i < count; i++)
		printf("%d ", numbers[i]);
}

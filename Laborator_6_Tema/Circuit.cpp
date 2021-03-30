#include "Circuit.h"
#include "Weather.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>


Circuit::Circuit() {
	this->maxIndex = 100;
	this->currentIndex = 0;
	this->vectorMasini = (Car**)(malloc(this->maxIndex * sizeof(Car*)));
	this->aux = (Car**)(malloc(this->maxIndex * sizeof(Car*)));
}

void Circuit::AddCar(Car* myCar) {
	if (this->currentIndex < this->maxIndex)
	{
		this->vectorMasini[this->currentIndex++] = myCar;
	}
}

int Circuit::SetLength(int length) {
	this->length = length;
}

int Circuit::SetWeather(Weather::condition) {
	Weather::condition;
}

void Circuit::Race() {

	for(i = 0; i < maxIndex - 1; i++)
		for (j = i + 1; j < maxIndex; j++)
		{
			if (this->vectorMasini[i]->GetAverageSpeed() < this->vectorMasini[j]->GetAverageSpeed())
			{
				this->aux[1] = this->vectorMasini[i];
				this->vectorMasini[i] = this->vectorMasini[j];
				this->vectorMasini[j] = aux[1];
			}
		}
}

void Circuit::ShowFinalRanks() {
	printf("Final Ranks from the fastest car to the slowest: ");
	for (i = 0; i < maxIndex; i++)
		if (((this->vectorMasini[i]->GetFuelCapacity() * 100) / this->vectorMasini[i]->GetFuelConsumption()) >= length)
			printf("\n%c",this->vectorMasini[i]);
}

void Circuit::ShowWhoDidNotFinish() {
	printf("Cars who couldn't finish the race : ");
	for (i = 0; i < maxIndex; i++)
		if (((this->vectorMasini[i]->GetFuelCapacity() * 100) / this->vectorMasini[i]->GetFuelConsumption()) < length)
			printf("\n%c", this->vectorMasini[i]);
}
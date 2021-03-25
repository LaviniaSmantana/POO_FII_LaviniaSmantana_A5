#include "Circuit.h"
#include "Weather.h"
Circuit::Circuit() {
	this->maxIndex = 100;
	this->currentIndex = 0;
	this->vectorMasini = (Car**)(malloc(this->maxIndex * sizeof(Car*)));
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

int Circuit::SetWeather() {
	Weather::condition;
	
}
#include "Dacia.h"
#include "Car.h"
#include "Circuit.h"
#include "Weather.h"

Car* masina;

int Dacia::SetAverageSpeed(int speed) {
	if (Weather::Rain)
		this->speed = 50;
	if (Weather::Snow)
		this->speed = 30;
	if (Weather::Sunny)
		this->speed = 65;
}
int Dacia::SetFuelCapacity(int capacity) {
	this->capacity = 5;
}

int Dacia::SetFuelConsumption(int consumption) {
	this->consumption = 9;
}

int Dacia::GetAverageSpeed() {
	return this->speed;
}

int Dacia::GetFuelCapacity() {
	return this->capacity;
}

int Dacia::GetFuelConsumption() {
	return this->consumption;
}
#include "Mazda.h"
#include "Circuit.h"
#include "Car.h"
#include "Weather.h"
int Mazda::SetAverageSpeed(int speed) {
	if (Weather::Rain)
		this->speed = 50;
	if (Weather::Snow)
		this->speed = 35;
	if (Weather::Sunny)
		this->speed = 90;
}
int Mazda::SetFuelCapacity(int capacity) {
	this->capacity = 10;
}

int Mazda::SetFuelConsumption(int consumption) {
	this->consumption = 11;
}

int Mazda::GetAverageSpeed() {
	return this->speed;
}

int Mazda::GetFuelCapacity() {
	return this->capacity;
}

int Mazda::GetFuelConsumption() {
	return this->consumption;
}
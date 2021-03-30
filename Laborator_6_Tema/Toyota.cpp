#include "Toyota.h"
#include "Circuit.h"
#include "Car.h"
#include "Weather.h"
int Toyota::SetAverageSpeed(int speed) {
	if (Weather::Rain)
		this->speed = 80;
	if (Weather::Snow)
		this->speed = 55;
	if (Weather::Sunny)
		this->speed = 110;
}
int Toyota::SetFuelCapacity(int capacity) {
	this->capacity = 50;
}

int Toyota::SetFuelConsumption(int consumption) {
	this->consumption = 5;
}

int Toyota::GetAverageSpeed() {
	return this->speed;
}

int Toyota::GetFuelCapacity() {
	return this->capacity;
}

int Toyota::GetFuelConsumption() {
	return this->consumption;
}
#include "Mercedes.h"
#include "Circuit.h"
#include "Car.h"
#include "Weather.h"
int Mercedes::SetAverageSpeed(int speed) {
	if (Weather::Rain)
		this->speed = 85;
	if (Weather::Snow)
		this->speed = 65;
	if (Weather::Sunny)
		this->speed = 130;
}
int Mercedes::SetFuelCapacity(int capacity) {
	this->capacity = 60;
}

int Mercedes::SetFuelConsumption(int consumption) {
	this->consumption = 15;
}

int Mercedes::GetAverageSpeed() {
	return this->speed;
}

int Mercedes::GetFuelCapacity() {
	return this->capacity;
}

int Mercedes::GetFuelConsumption() {
	return this->consumption;
}
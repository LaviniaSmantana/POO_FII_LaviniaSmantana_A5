#include "Ford.h"
#include "Circuit.h"
#include "Car.h"
#include "Weather.h"
int Ford::SetAverageSpeed(int speed) {
	if (Weather::Rain)
		this->speed = 70;
	if (Weather::Snow)
		this->speed = 50;
	if (Weather::Sunny)
		this->speed = 105;
}
int Ford::SetFuelCapacity(int capacity) {
	this->capacity = 40;
}

int Ford::SetFuelConsumption(int consumption) {
	this->consumption = 6;
}

int Ford::GetAverageSpeed() {
	return this->speed;
}

int Ford::GetFuelCapacity() {
	return this->capacity;
}

int Ford::GetFuelConsumption() {
	return this->consumption;
}
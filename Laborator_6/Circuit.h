#pragma once
#include "Car.h"
#include "Weather.h"
#include <stdlib.h>
class Circuit 
{
	Car** vectorMasini;
	int currentIndex, maxIndex, length, weather;
public:

	Circuit();
	~Circuit();

	int SetLength(int length);
	int SetWeather();
	void AddCar(Car* pointer);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

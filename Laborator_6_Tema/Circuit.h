#pragma once
#include "Car.h"
#include "Weather.h"
#include <stdlib.h>
class Circuit 
{
	Car** vectorMasini;
	Car** aux;
	Car* masina;
	Car* myCar;
	int currentIndex, maxIndex, length, weather;
	int i, j;
	
	
public:

	Circuit();
	~Circuit();

	int SetLength(int length);
	int SetWeather(Weather::condition);
	void AddCar(Car* masina);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

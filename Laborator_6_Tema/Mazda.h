#pragma once
#include "Car.h"
class Mazda 
{
    int speed, capacity, consumption;
    Car* masina;
public:
    int SetFuelCapacity(int);
    int SetFuelConsumption(int);
    int SetAverageSpeed(int);
    int GetFuelCapacity();
    int GetFuelConsumption();
    int GetAverageSpeed();
};


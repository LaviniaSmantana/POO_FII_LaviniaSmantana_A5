#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Car.h"
#include "Circuit.h"
#include "Dacia.h"
#include "Ford.h"
#include "Mazda.h"
#include "Mercedes.h"
#include "Toyota.h"
#include "Weather.h"
using namespace std;
int main()

{
	Car* Dacia;
	Car* Mazda;
	Car* Ford;
	Car* Mercedes;
	Car* Toyota;
	Circuit c;

	c.SetLength(100);

	c.SetWeather(Weather::Rain);

	c.AddCar(Dacia);

	c.AddCar(Toyota);

	c.AddCar(Mercedes);

	c.AddCar(Ford);

	c.AddCar(Mazda);

	c.Race();

	c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.

	c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit

	return 0;

}

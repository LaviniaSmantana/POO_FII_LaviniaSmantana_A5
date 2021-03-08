#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Canvas.h"

using namespace std;
int main()
{
	Canvas M1(20, 20);
	printf("--------------FUNCTIA DRAWCIRCLE--------------\n\n");
	M1.DrawCircle(10, 10, 5, '*');
	M1.Print();


	Canvas M2(20, 20);
	printf("--------------FUNCTIA FILLCIRCLE--------------\n\n");
	M2.FillCircle(10, 10, 5, '*');
	M2.Print();
	

	Canvas M3(20, 20);
	printf("--------------FUNCTIA DRAWRECT--------------\n\n");
	M3.DrawRect(5, 5, 10, 15, '#');
	M3.Print();
	

	Canvas M4(20, 20);
	printf("--------------FUNCTIA FILLRECT--------------\n\n");
	M4.FillRect(5, 5, 10, 15, '#');
	M4.Print();
	

	Canvas M5(20, 20);
	printf("--------------FUNCTIA SETPOINT--------------\n\n");
	M5.SetPoint(5, 10, '@');
	M5.Print();


	Canvas M6(20, 20);
	printf("--------------FUNCTIA DRAWLINE--------------\n\n");
	M6.DrawLine(5, 5, 10, 10, '$');
	M6.Print();


	system("pause");
	return 0;
}
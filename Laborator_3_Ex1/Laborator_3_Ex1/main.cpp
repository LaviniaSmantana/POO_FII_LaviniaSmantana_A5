#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Math.h"
#include <string.h>
using namespace std;
int main()
{
	int n = 6;  // pentru lista 
	int a = 10, b = 5, c = 20;
	double x = 6.5, y = 5.2, z = 3.4; 

	cout << "Valorile de tip int sunt  |  a: " << a << "  |  b: " << b << "  |  c: " << c << endl;
	cout << "Valorile de tip double sunt  |  x: " << x << "  |  y: " << y << "  |  z: " << z << endl;
	Math A;
	cout << "a + b = " << A.Add(a, b) << endl;
	cout << "a + b + c =" << A.Add(a, b, c) << endl;
	cout << "x + y = " << A.Add(x, y) << endl;
	cout << " x + y + z = " << A.Add(x, y, z) << endl;
	cout << "a * b = " << A.Mul(a, b) << endl;
	cout << "a * b * c = " << A.Mul(a, b, c) << endl;
	cout << " x * y = " << A.Mul(x, y) << endl;
	cout << "x * y * z = " << A.Mul(x, y, z) << endl;
	count << " Suma Lista = " << A.Add(n, a, b, c, 5, 10, 15) << endl;
	cout << "Adunare char |  " << A.Add("Acesta este Lab", "oratorul 3") << endl;
	

	system("pause");
	return 0;
}
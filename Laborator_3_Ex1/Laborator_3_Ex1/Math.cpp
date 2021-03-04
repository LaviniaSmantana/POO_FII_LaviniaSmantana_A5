#include "Math.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int Math::Add(int x, int y) {
	return x + y;
}
int Math::Add(int x, int y, int z) {
	return x + y + z;
}
int Math::Add(double x, double y) {
	return x + y;
}
int Math::Add(double x, double y, double z) {
	return x + y + z;
}
int Math::Mul(int x, int y) {
	return x * y;
}
int Math::Mul(int x, int y, int z) {
	return x * y * z;
}
int Math::Mul(double x, double y) {
	return x * y;
}
int Math::Mul(double x, double y, double z) {
	return x * y * z;
}
int Math::Add(int count, ...) {
	va_list vl;
	int suma = 0;
	va_start(vl, count);
	for (int i = 0; i <= count; ++i)
		suma = suma + va_arg(vl, int);
	va_end(vl);
	return suma;
}
char* Math::Add(const char* sir1, const char* sir2) {
	int n1 = strlen(sir1);
	int n2 = strlen(sir2);
	int n = n1 + n2;
	if (sir1 == nullptr || sir2 == nullptr)
		return nullptr;
	else {
		char* sir = (char*)malloc((n + 1) * sizeof(char));
		memset(sir, 0, (n + 1) * sizeof(char));
		memcpy(sir, sir1, n1);
		memcpy(sir + n1, sir2, n2);
		return sir;
	}
}
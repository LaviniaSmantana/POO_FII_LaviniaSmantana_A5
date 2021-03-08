#include "Canvas.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

Canvas::Canvas() {
	
	this->matrix = nullptr;
	this->width = 0;
	this->height = 0;
	this->NumberOfLines = 0;
	this->NumberOfColumns = 0;
}

Canvas::Canvas(int width, int height) {
	
	this->NumberOfLines = width;
	this->NumberOfColumns = height;
	this->matrix = (char**)(malloc(NumberOfLines * sizeof(char*)));

	for (i = 0; i < NumberOfLines; i++)
		matrix[i] = (char*)(malloc(this->NumberOfColumns * sizeof(char)));
}

void Canvas::Clear() {
	
	for (i = 0; i < this->NumberOfLines; i++)
		for (j = 0; j < this->NumberOfColumns; j++)
			matrix[i][j] = ' ';
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
	
	Clear();

	for (i = 0; i < NumberOfLines; i++)
		for (j = 0; j < NumberOfColumns; j++)
			if ((((i - x) * (i-x) + (j - y) * (j-y)) >= ray * (ray - 1)) && (((i - x) * (i-x) + (j - y) * (j-y)) <= ray * (ray + 1)))
				matrix[i][j] = ch;
			else matrix[i][j] = ' ';

}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
	
	Clear();

	for (i = 0; i < NumberOfLines; i++)
		for (j = 0; j < NumberOfColumns; j++)
			if ((i - x) * (i - x) + (j - y) * (j - y) <= ray * ray)
				matrix[i][j] = ch;
			else matrix[i][j] = ' ';
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
	
	Clear();

	for (i = left; i <= right; i++)
	{
		matrix[i][top] = ch;
		matrix[i][bottom] = ch;
	}
	for (j = top; j <= bottom; j++)
	{
		matrix[left][j] = ch;
		matrix[right][j] = ch;
	}
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
	
	Clear();

	for (i = left; i <= right; i++)
		for (j = top; j <= bottom; j++)
			matrix[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch) {

	Clear();

	matrix[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
	
	Clear();

	deltaX = x2 - x1;
	deltaY = y2 - y1;
	delta = 2 * deltaY - deltaX;
	j = y1;
	for (i = x1; i <= x2; i++)
	{
		matrix[i][j] = ch;
		if (delta > 0)
		{
			j++;
			delta = delta - 2 * deltaX;
		}
		delta = delta + 2 * deltaY;
	}

}

void Canvas::Print() {
	
	if (this->matrix != nullptr)
	{
		for (i = 0; i < this->NumberOfLines; i++)
		{
			for (j = 0; j < this->NumberOfColumns; j++)
			{
				printf("%c", this->matrix[i][j]);
				printf(" ");
			}
			printf("\n");
		}
	}
	else printf("MATRIX = NULLPTR\n");
}







#pragma once
#include <stdlib.h>
#include <stdio.h>

class Canvas
{
    int width, height, x, y, ray, left, top, right, bottom, x1, x2, y1, y2;
    int i, j;
    char ch;
    char** matrix;
    int NumberOfLines, NumberOfColumns, deltaY, deltaX, delta;

    
public:

    Canvas();

    Canvas(int width, int height);

    void DrawCircle(int x, int y, int ray, char ch);

    void FillCircle(int x, int y, int ray, char ch);

    void DrawRect(int left, int top, int right, int bottom, char ch);

    void FillRect(int left, int top, int right, int bottom, char ch);

    void SetPoint(int x, int y, char ch);

    void DrawLine(int x1, int y1, int x2, int y2, char ch);

    void Print(); // shows what was printed

    void Clear(); // clears the canvas

};

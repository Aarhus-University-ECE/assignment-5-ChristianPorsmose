#pragma once
#include <stdbool.h>

typedef struct point {
	int x;
	int y;
} point;

typedef struct circle {
	int r; //radius
	point p; //point p created from structure point that holds coordinates. 
} circle;

void fiveCircles(circle c[]);
bool circleIsValid(const circle* c);
void translate(circle* c, const point* p);
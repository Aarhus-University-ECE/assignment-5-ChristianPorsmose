#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "circle.h"

void fiveCircles(circle c[]) {
//creates 5 circles
for (int i = 0; i < 5; i++) {
	c[i].r = i; //setting radius of circle i to i. 
	c[i].p.x = i; //setting first coordinat of first cicle entering struct points variable x.
	c[i].p.y = i; ///setting second coordinat of first cicle entering struct points variable y.
}
}

bool circleIsValid(const circle * c) {
if (c->r > 0) { //checks if the circle that c points to has a radius greater than 0.
	return true;
}
else 
	return false;
}

void translate(circle* c, const point* p) {
//taking a pointer to a circle and a pointer to a point and adds the x coordinate and the y coordinate
 c->p.x = c->p.x + p->x;
 c->p.y = c->p.y + p->y;
}




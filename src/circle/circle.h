/**
 * Copyright 2017 Manoel Vilela
 * UFC
 */


#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

/**
 * @description: A structure to represent a circle
 *
 * @member center: a 2D point to represent a center of the circle
 * @member r: a radius to represent the size of the circle
 */
typedef struct {
    Point center;
    float r;
} Circle;

int point_inside(Circle *c, Point *p);
Circle new_circle(Point center, float r);
Circle read_circle();

#endif

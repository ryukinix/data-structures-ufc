/**
 * Copyright 2017 Manoel Vilela
 * UFC
 */

#include <math.h>
#include <stdio.h>
#include "point.h"


/**
 * @description: Just a util function to calculate a square
 *
 * @param x: a real number
 * @returns: a squared number
 */
extern inline float square(float x) {
    return pow(x, 2);
}

/**
 * @description: Distance between two points
 *
 * @param px: a pointer to structure Point which has the fields x and y
 * @param py: same as above
 *
 * @returns: a float number representing the distance of px and py
 */
float distance(Point *px, Point *py) {
    return sqrt(square(px->x - py->x) + square(px->y - py->y));
}

/**
 * @description: Create a new point structure based on params x and y
 *
 * @param x: a real number x
 * @param y: a real number y;
 *
 * @returns: a Point structure
 */
Point new_point(float x, float y) {
    Point p;
    p.x = x;
    p.y = y;
    return p;
}
/**
 * @description: Read from stdin a new Point
 *
 * @returns: a Point structure
 */
Point read_point() {
    float x, y;
    printf(":: Reading a point [x y]: ");
    scanf("%f %f", &x, &y);
    return new_point(x, y);
}

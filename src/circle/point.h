/**
 * Copyright 2017 Manoel Vilela
 * UFC
 */

#ifndef POINT_H
#define POINT_H

/**
 * @description: simple implementation of a two dimensional vector of plane
 *
 * @member x: a real number (abscissa)
 * @member y: another real number (coordenante)
 */
typedef struct {
    float x;
    float y;
} Point;

float distance(Point *px, Point *py);
Point new_point(float x, float y);
Point read_point();

#endif

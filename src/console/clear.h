/**
 * ============================================================================
 *
 *                      Copyright 2017 Manoel Vilela
 *
 *         Author: Manoel Vilela
 *        Contact: manoel_vilela@engineer.com
 *   Organization: UFC
 *
 * ============================================================================
 */

#ifndef CLEAR_H
#define CLEAR_H

#ifdef _WIN32
#include <stdlib.h>
#define clear() system("cls")
#else
#include <stdio.h>
#define clear() printf("\033[1;1H\033[2J")
#endif

#endif

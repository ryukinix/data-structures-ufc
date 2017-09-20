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
#include <conio.h>
#else
#include <stdio.h>
#define clrscr() printf("\033[1;1H\033[2J")
#endif

/**
 * @brief if on windows use the horrible conion.h, otherwise use ANSI escapes
 */
static inline void clear() {
    clrscr();
}

#endif

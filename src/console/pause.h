/*
 * ============================================================================
 *
 *                      Copyright 2017 Manoel Vilela
 *
 *         Author: Manoel Vilela
 *        Contact: manoel_vilela@engineer.com
 *   Organization: UFC
 *
 * ============================================================================
**/

#ifndef PAUSE_H
#define PAUSE_H

#include <stdio.h>

/** @brief remove all the endlines from stdin */
void clean_stdin() {
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

/** @brief Cross-platform pause: works on windows and linux */
void pause() {
    clean_stdin();
    printf("Press enter to continue...");
    getchar();
}

#endif
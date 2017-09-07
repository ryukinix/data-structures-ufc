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

/**
 * @brief remove all the garbage from stdin
 */
static inline void clean_stdin() {
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

/**
 * @brief Cross-platform pause: works on windows and linux
 */
static inline void pause() {
    clean_stdin();
    printf("Press enter to continue...");
    getchar();
}

#endif

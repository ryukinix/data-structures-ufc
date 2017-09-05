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


#include <stdio.h>
#include <math.h>
#include "matrix.h"
#include "matrix_print.h"

// repeat the character `c` `n` times
void repeat_printf(char c, int n) {
    while(n--) {
        printf("%c", c);
    }
}

void border(int length) {
    printf("+");
    repeat_printf('-', length - 2);
    printf("+\n");
}

void matrix_print(Matrix* matrix) {
    int m = matrix_lines(matrix);
    int n = matrix_columns(matrix);
    int width = ceil(log10(matrix_max(matrix) + 1)) + 3;
    int column_length = (width + 1) * n + 3;
    border(column_length);
    for(int i = 0; i < m; i++) {
        printf("| ");
        for(int j = 0; j < n; j++) {
            printf("%*.2f ", width, matrix_get(matrix, i, j));
        }
        printf("|\n");
    }
    border(column_length);
}

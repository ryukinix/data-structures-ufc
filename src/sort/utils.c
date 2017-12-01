/**
 * ================================================
 *
 *         Copyright 2017 Manoel Vilela
 *
 *         Author: Manoel Vilela
 *        Contact: manoel_vilela@engineer.com
 *   Organization: UFC
 *
 * ===============================================
 */

#include <stdio.h>
#include "sort.h"

void print_vector(Type *v, int n) {
    printf("[");
    for(int i = 0; i < n; i++) {
        printf(TypeFormat, v[i]);
        if (i + 1 < n) {
            printf(", ");
        }
    }
    printf("]\n");
}

void swap(Type *e1, Type *e2) {
    Type temp = *e1;
    *e1 = *e2;
    *e2 = temp;
}

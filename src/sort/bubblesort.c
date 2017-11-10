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

#include "sort.h"
#include <stdbool.h>

void bubblesort(Type *v, int n) {
    for(int i = n - 1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if (v[j] > v[j + 1]) {
                swap(v + j, v + j + 1);
            }
        }
    }
}

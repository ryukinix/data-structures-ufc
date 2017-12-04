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


void quicksort(Type *v, int n) {
    if (n <= 1) {
        return;
    }

    const int pivot = 0;
    int x = v[pivot];
    int a = 1;
    int b = n - 1;

    while(1) {
        while(a  <n && v[a] <= x) a++;
        while(v[b] > x) b--;
        if (a < b) {
            swap(v + a, v + b);
            a++;
            b--;
        } else {
            break;
        }
    }
    swap(v + pivot, v + b);
    quicksort(v + a, n - a);
    quicksort(v, b);
}

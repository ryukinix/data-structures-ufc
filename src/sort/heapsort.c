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

void heapify(Type v[], int n, int i) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*(i + 1);

    if (l < n && v[l] > v[largest]) {
        largest = l;
    }

    if (r < n && v[r] > v[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(v+i, v+largest);
        heapify(v, n, largest);
    }
}

void heapsort(Type *v, int n) {
    // build heap
    for(int i = n/ 2 - 1; i >= 0; i--) {
        heapify(v, n, i);
    }
    for (int i = n -1; i >= 0; i--) {
        swap(v, v + i);
        heapify(v, i, 0);
    }
}

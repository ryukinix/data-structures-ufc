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

/**
 * @description Merges two partitions in sorted way
 *     /p v is a array of elements
 *     /p l is a index-0 based of the left partition
 *     /p m is the point to cut the array
 *     /p r is a index-0 based of the right partition
 *
 * @example
 *     First subarray is v[l..m]
 *     Second subarray is v[m+1..r]
 */
void merge(Type v[], int l, int m, int r) {
    int i, j, k; // counters
    int n1 = m - l + 1; // first size
    int n2 = r - m; // second size

    /* temporary arrays */
    int L[n1], R[n2];

    /* copy the arrays */
    for (i = 0; i < n1; i++) {
        L[i] = v[l + i];
    }
    for (j = 0; j < n1; j++) {
        R[j] = v[m + j + 1];
    }

    /* Merge arrays in sorted way */

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        } else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there any */
    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }

}

/* Auxiliar function to break in partitions recursively */
void partition(Type v[], int l, int r) {
    if (l < r) {
        int m = l + (r - l)/2;

        partition(v, l, m);
        partition(v, m+1, r);
        merge(v, l, m, r);

    }
}


void mergesort(Type *v, int n) {
    partition(v, 0, n - 1);
}

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

// HACK: macro rules
#define TEST(ALGORITHM, V, S)                   \
    printf("== Testing for %s: ", #ALGORITHM);  \
    print_vector(V, S);                         \
    ALGORITHM(V, S);                            \
    printf("Finished: ");                       \
    print_vector(V, S)

void test_bubblesort(void) {
    Type v[] = {5,2,3,1,3,5};
    int n = 6;
    TEST(bubblesort, v, n);
}

void test_insertionsort(void) {
    Type v[] = {5,2,3,1,3,5};
    int n = 6;
    TEST(insertionsort, v, n);

}

void test_quicksort(void) {
    Type v[] = {5,2,3,1,3,5};
    int n = 6;
    TEST(quicksort, v, n);

}

void test_mergesort(void) {
    Type v[] = {5,2,3,1,3,5};
    int n = 6;
    TEST(mergesort, v, n);

}

void test_heapsort(void) {
    Type v[] = {5,2,3,1,3,5};
    int n = 6;
    TEST(heapsort, v, n);

}

int main(void) {
    test_bubblesort();
    test_insertionsort();
    test_quicksort();
    test_mergesort();
    test_heapsort();
    return 0;
}

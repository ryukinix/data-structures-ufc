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

void test_bubblesort(void) {
    int v[] = {5,2,3,1,3,5};
    int s = 6;
    printf("== Testing for bubblesort: ");
    print_vector(v, s);
    bubblesort(v, s);
    printf("Finished: ");
    print_vector(v, s);
}

void test_insertionsort(void) {
    int v[] = {5,2,3,1,3,5};
    int s = 6;
    printf("== Testing for insertionsort: ");
    print_vector(v, s);
    insertionsort(v, s);
    printf("Finished: ");
    print_vector(v, s);
}

int main(void) {
    test_bubblesort();
    test_insertionsort();
    return 0;
}

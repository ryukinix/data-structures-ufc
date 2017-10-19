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
#include "bst.h"
#define N 5

int main(void) {
    BSTree* t = bst_create();
    int array[N] = {10, 20, 5, 80, 50};

    // insertion
    for(int i = 0; i < N; i++) {
        printf("Insert: %d\n", array[i]);
        t = bst_insert(t, array[i]);
        bst_print(t);
    }

    // infix, posfix, prefix
    printf("== Notations\n");
    printf("Infix: ");
    bst_infix(t);
    printf("Prefix: ");
    bst_prefix(t);
    printf("Posfix: ");
    bst_posfix(t);

    // remove
    for(int i = 0; i < N; i++) {
        printf("Remove: %d\n", array[i]);
        t = bst_remove(t, array[i]);
        bst_print(t);
    }

    bst_free(t);
    return 0;
}

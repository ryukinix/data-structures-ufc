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

int main(void) {
    BSTree* t = bst_create();
    t = bst_insert(t, 10);
    t = bst_insert(t, 20);
    t = bst_insert(t, 5);
    t = bst_insert(t, 80);
    t = bst_insert(t, 50);
    bst_print(t);
    bst_infix(t);
    bst_prefix(t);
    bst_infix(t);
    return 0;
}

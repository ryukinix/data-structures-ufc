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

/**
 * @brief Simple tests for the abstract data type list
 */


#include "list.h"

int main(void) {
    List *l = list_create();
    l = list_insert_ord(l, 3);
    l = list_insert_ord(l, 1);
    l = list_insert_ord(l, 9);
    l = list_insert_ord(l, 0);
    List* s = list_search(l, 3);
    list_print(l);
    list_print(s);

    l = list_remove(l, 3);
    list_print(l);

    list_free(l);
    l = EMPTY_LIST;
    return 0;
}

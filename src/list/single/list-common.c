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
 * @brief common functions between list-iter and list-rec
 */

#include <stddef.h>
#include <stdlib.h>
#include "list.h"
#include "utils/check_alloc.h"

List* list_create(void) {
    return NULL;
}

int list_empty(List *l) {
    return l == EMPTY_LIST;
}


List* list_insert(List *l, int data) {
    List *head = (List *) malloc(sizeof(List));
    check_alloc(head);
    head->data = data;
    head->next = list_create();

    if (list_empty(l)) {
        l = head;
    } else {
        head->next = l;
        l = head;

    }
    return l;
}

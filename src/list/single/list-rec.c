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
 * @brief List methods defined recursively
 */


#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "utils/check_alloc.h"

// util function
static inline List* new_node(int data) {
    List* l = (List *) malloc(sizeof(List));
    check_alloc(l);
    l->data = data;
    l->next = list_create();
    return l;
}

// auxiliar print recursively list (without squared brackets)
void aux_list_print(List *l) {
    if(!list_empty(l)) {
        printf("%d", l->data);
        if (!list_empty(l->next)) {
            printf(", ");
        }
        aux_list_print(l->next);
    }
}


List* list_append(List *l, int data) {
    if (list_empty(l)) {
        l = new_node(data);
    } else {
        l->next = list_append(l->next, data);
    }

    return l;
}


List* list_insert_ord(List *l, int data) {
    if(list_empty(l) || data <= l->data) {
        l = list_insert(l, data);
    } else {
        // l is not empty
        // data > l->data
        l->next = list_insert_ord(l->next, data);
    }
    return l;
}


List* list_search(List *l, int data) {
    if(!list_empty(l)) {
        if (l->data != data) {
            l = list_search(l->next, data);
        }
    }
    return l;
}


void list_print(List *l) {
    printf("[");
    aux_list_print(l);
    printf("]\n");
}


List* list_remove(List *l, int data) {
    if (!list_empty(l)) {
        if (l->data == data) {
            List* next = l->next;
            free(l);
            l = next;
        } else {
            l->next = list_remove(l->next, data);
        }
    }
    return l;
}

void list_free(List *l) {
    if (!list_empty(l)) {
        list_free(l->next);
        free(l);
    }
}

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
#include <stdarg.h>
#include <stdlib.h>
#include <stdbool.h>
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
    printf("]");
}

void list_println(List *l) {
    list_print(l);
    printf("\n");
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


List* list(int size_list,...) {
    List *l = list_create();
    va_list args;

    va_start(args, size_list);
    for(int i = 0; i < size_list; i++) {
        l = list_append(l, va_arg(args, int));
    }

    va_end(args);
    return l;
}


int list_last(List *l) {
    if (!list_empty(l) && list_empty(l->next)) {
        return l->data;
    } else if (!list_empty(l)) {
        return list_last(l->next);
    } else {
        printf("Exception: get head on empty list\n");
        exit(1);
    }
}


int list_head(List *l) {
    return l->data;
}


List* list_tail(List *l) {
    return l->next;
}


int list_pop_head(List** l) {
    if (!list_empty(*l)) {
        int head = (*l)->data;
        List* head_pointer = *l;
        *l = (*l)->next;
        free(head_pointer);
        return head;
    } else {
        printf("Exception: pop head on empty list\n");
        exit(1);
    }
}


int list_pop_last(List** l) {
    if (!list_empty(*l) && list_empty((*l)->next)) {
        return list_pop_head(l);
    } else if (!list_empty(*l)) {
        return list_pop_last(&(*l)->next);
    } else {
        printf("Exception: pop last on empty list\n");
        exit(1);
    }
}

int list_equal(List* l_x, List* l_y) {
    if (list_empty(l_x) && list_empty(l_y)) {
        return true;
    } else if (list_empty(l_x) || list_empty(l_y)) {
        return false;
    } else {
        return l_x->data==l_y->data && list_equal(l_x->next, l_y->next);
    }
}

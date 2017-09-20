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

#include <stdlib.h>
#include <stdio.h>
#include "stack.h"
#include "utils/check_alloc.h"
#include "list/single/list.h"

struct stack {
    List* list;
};

Stack* stack_create(void) {
    Stack *s = (Stack*) malloc(sizeof(Stack));
    check_alloc(s);

    s->list = list_create();
    return s;
}

int stack_empty(Stack* s) {
    return list_empty(s->list);
}

void stack_push(Stack *s, int data) {
    s->list = list_insert(s->list, data);
}

int stack_pop(Stack *s) {
    return list_pop_head(&s->list);
}

void stack_print(Stack* s) {
    list_print(s->list);
}

void stack_println(Stack* s) {
    list_println(s->list);
}

void stack_free(Stack* s) {
    list_free(s->list);
    free(s);
    s->list = NULL;
}

int stack_top(Stack *s) {
    return list_head(s->list);
}

int _list_odds(List* l) {
    if (list_empty(l)) {
        return 0;
    } else if (list_head(l) & 1) {
        return 1 + _list_odds(list_tail(l));
    } else {
        return 0 + _list_odds(list_tail(l));
    }
}

int stack_odds(Stack *s) {
    return _list_odds(s->list);
}

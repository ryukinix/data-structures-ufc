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
#include <stdio.h>

void test_basic_functions(void) {
    puts("== test basic functions: insert_ord, print, free and remove");
    List *l = list_create();
    printf("Ordered insert: 3, 1, 9, 0\n");
    l = list_insert_ord(l, 3);
    l = list_insert_ord(l, 1);
    l = list_insert_ord(l, 9);
    l = list_insert_ord(l, 0);
    list_println(l);
    printf("Search for sub-list with head 3\n");
    List* s = list_search(l, 3);
    list_println(s);

    printf("Remove 3\n");
    l = list_remove(l, 3);
    list_println(l);

    list_free(l);
    l = EMPTY_LIST;

}

void test_list(void) {
    puts("== test list() variadic");
    List *l = list_init(4,1,2,3,4);
    list_println(l);
    list_free(l);
    l = EMPTY_LIST;
}

void test_list_last(void) {
    puts("== test list_last()");
    List *l = list_init(3, 1, 2, 3);
    list_println(l);
    printf("Last: %d\n", list_last(l));
    list_free(l);
    l = EMPTY_LIST;
}

void test_list_head(void) {
    puts("== test list_head()");
    List *l = list_init(3, 1, 2, 3);
    list_println(l);
    printf("Head: %d\n", list_head(l));
    list_free(l);
    l = EMPTY_LIST;
}

void test_list_tail(void) {
    puts("== test list_tail()");
    List *l = list_init(3, 1, 2, 3);
    list_println(l);
    printf("Tail: ");
    list_println(list_tail(l));
    list_free(l);
    l = EMPTY_LIST;
}

void test_list_pop_head(void) {
    puts("== test list_pop_head");
    List *l = list_init(3, 1, 2, 3);
    list_println(l);
    printf("Head popped: %d\n", list_pop_head(&l));
    printf("List updated: ");
    list_println(l);
    list_free(l);
    l = EMPTY_LIST;
}

void test_list_pop_last(void) {
    puts("== test list_pop_last()");
    List *l = list_init(3, 1, 2, 3);
    list_println(l);
    printf("Last popped: %d\n", list_pop_last(&l));
    printf("List updated: ");
    list_println(l);
    list_free(l);
    l = EMPTY_LIST;
}

void test_list_equal(void) {
    puts("== test list_list_equal()");
    List *l = list_init(3, 1, 2, 3);
    List *s = list_init(3, 1, 2, 3);
    List *z = list_init(2, 0, 1);
    list_print(l);
    printf(" == ");
    list_print(s);
    printf(" => %s\n", list_equal(l, s)? "true" : "false");
    list_print(s);
    printf(" == ");
    list_print(z);
    printf(" => %s\n", list_equal(s, z)? "true" : "false");

    list_free(l);
    list_free(s);
    list_free(z);
    l = EMPTY_LIST;
    s = EMPTY_LIST;
    z = EMPTY_LIST;
}

int main(void) {
    test_basic_functions();
    test_list();
    test_list_last();
    test_list_head();
    test_list_tail();
    test_list_pop_head();
    test_list_pop_last();
    test_list_equal();
    return 0;
}

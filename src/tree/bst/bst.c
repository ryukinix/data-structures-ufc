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
#include <stdlib.h>
#include "bst.h"
#include "utils/check_alloc.h"
#define MAX(a, b) a > b? a : b

struct node {
    Type value;
    BSTree* left;
    BSTree* right;
};

BSTree* bst_create(void) {
    return BST_EMPTY;
}

int bst_empty(BSTree *t) {
    return t == BST_EMPTY;
}

BSTree* bst_create_node(BSTree* left, BSTree* right, Type value) {
    BSTree* node = (BSTree*) malloc(sizeof(BSTree));
    check_alloc(node);
    node->left = left;
    node->right = right;
    node->value = value;
    return node;
}

int bst_exists(BSTree *t, Type c) {
    return bst_search(t, c) != BST_EMPTY;
}

BSTree* bst_search(BSTree *t, Type c) {
    if (!bst_empty(t)) {
        if (c < t->value) {
            return bst_search(t->left, c);
        } else if (c > t->value) {
            return bst_search(t->right, c);
        } else {
            return t;
        }
    }
    return BST_EMPTY;
}


void bst_print_aux(BSTree *t, int deep, char prefix) {
    if (!bst_empty(t)) {
        printf("| %*c(%c) %d\n", deep*4, ' ', prefix,  t->value);
        deep++;
        bst_print_aux(t->left, deep, 'L');
        bst_print_aux(t->right, deep, 'R');
    }
}

void bst_print(BSTree *t) {
    printf("== TREE\n");
    bst_print_aux(t, 1, '.');
}


int bst_height(BSTree *t) {
    if (!bst_empty(t)) {
        return MAX(1 + bst_height(t->left), 1 + bst_height(t->right));
    }
    return -1;
}

BSTree* bst_insert(BSTree *t, Type c) {
    if (bst_empty(t)) {
        t = bst_create_node(NULL, NULL, c);
    } else if (c < t->value) {
        t->left = bst_insert(t->left, c);
    } else if (c > t->value) {
        t->right = bst_insert(t->right, c);
    }
    return t;
}

BSTree* bst_remove(BSTree *t, Type c) {
    // define here the function
    return 0;
}

void bst_free(BSTree *t) {
    // define here the procedure
    return;
}

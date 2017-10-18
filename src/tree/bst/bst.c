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
    // define here the function
    return 0;
}

BSTree* bst_search(BSTree *t, Type c) {
    // define here the function
    return 0;
}

void bst_print(BSTree *t) {
    // define here the procedure
    return;
}

int bst_height(BSTree *t) {
    // define here the function
    return 0;
}

BSTree* bst_insert(BSTree *t, Type c) {
    // define here the function
    return 0;
}

BSTree* bst_remove(BSTree *t, Type c) {
    // define here the function
    return 0;
}

void bst_free(BSTree *t) {
    // define here the procedure
    return;
}

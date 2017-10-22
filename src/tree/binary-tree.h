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

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#define Type int
#define TypeFormat "%d"

struct node {
    Type value;
    struct node* left;
    struct node* right;
};

typedef struct node BinaryTree;

#endif

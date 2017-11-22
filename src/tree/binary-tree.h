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

#ifndef Type
#define Type int
#endif
#ifndef TypeFormat
#define TypeFormat "%d"
#endif

struct node {
    Type value;
    struct node* left;
    struct node* right;
};

typedef struct node BinaryTree;

#endif

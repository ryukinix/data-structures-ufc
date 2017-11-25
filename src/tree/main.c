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
#include <string.h>
#include "bst/bst.h"
#include "ascii-tree/ascii-tree.h"
#include "console/console.h"

/**
 * @description
 * A simple program to see what happens on BST
 * interactively inserting and removing new elements
 */

int main(void) {
    BSTree *root = bst_create();
    int number;
    char command[50];
    printf("usage: [insert num | remove num | infix | posfix | prefix | print | clear]\n");
    while (1) {
        printf(">>> ");
        int tokens = scanf("%s", command);

        if (tokens < 1) { // EOF emit
            exit(0);
        }

        if (strcmp(command, "insert") == 0) {
            scanf(" %d", &number);
            root = bst_insert(root, number);
        } else if (strcmp(command, "remove") == 0) {
            scanf(" %d", &number);
            root = bst_remove(root, number);
        } else if (strcmp(command, "infix") == 0) {
            bst_infix(root);
        } else if (strcmp(command, "posfix") == 0) {
            bst_posfix(root);
        } else if (strcmp(command, "prefix") == 0) {
            bst_prefix(root);
        } else if (strcmp(command, "print") == 0) {
            print_ascii_tree(root);
        } else if (strcmp(command, "clear") == 0) {
            clear();
        } else if (strcmp(command, "exit") == 0 || strcmp(command, "quit") == 0) {
            exit(0);
        }

    }

}

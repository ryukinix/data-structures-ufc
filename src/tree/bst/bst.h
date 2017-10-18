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

#ifndef BST_H
#define BST_H

/**
 * @description
 * This module define a Abstract Data Type
 * for the structure Binary Search Tree.
 */

#define Type int


/* Binary Search Tree DataType Definition */
typedef struct node BSTree;

#define BST_EMPTY (BSTree*) 0

/* Função que cria um nó de uma Árvore */
BSTree* bst_create_node(BSTree* left, BSTree* right, Type value);

/* Função que cria uma Árvore Binária de Busca Vazia. */
BSTree* bst_create(void);

/* Testa se uma Árvore Binária é vazia. */
int bst_empty(BSTree *t);

/* Função que determina se um caractere pertence à Árvore. */
int bst_exists(BSTree *t, Type c);

/* Função que busca a sub-árvore que contém um inteiro. */
BSTree* bst_search(BSTree *t,Type c);

/* Função que imprime os elementos de uma Árvore. */
void bst_print(BSTree *t);

/* Função que retorna a altura de uma Árvore. */
int bst_height(BSTree *t);

/* Função que insere um inteiro em uma Árvore. */
BSTree* bst_insert(BSTree *t, Type c);

/* Função que remove um inteiro em uma Árvore. */
BSTree* bst_remove(BSTree *t, Type c);

/* Libera o espaço alocado para uma Árvore. */
void bst_free(BSTree *t);

#endif

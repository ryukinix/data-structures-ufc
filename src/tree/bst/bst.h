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
 * @description
 * This module define a Abstract Data Type
 * for the structure Binary Search Tree.
 */

#define Type int

typedef struct node BSTree;


/* Função que cria uma Árvore Binária de Busca Vazia. */
BSTree* bst_create(void);

/* Testa se uma Árvore Binária é vazia. */
int bst_empty(BSTree *a);

/*Função que determina se um caractere pertence à Árvore.*/
int bst_exists(BSTree *a, Type c);

/* Função que busca a sub-árvore que contém um inteiro. */
BSTree* bst_search(BSTree *a,Type c);

/* Função que imprime os elementos de uma Árvore. */
void bst_print(BSTree *a);

/* Função que insere um inteiro em uma Árvore. */
BSTree* bst_insert(BSTree *a, Type c);

/* Função que remove um inteiro em uma Árvore. */
BSTree* bst_remove(BSTree *a, Type c);

/* Libera o espaço alocado para uma Árvore. */
void bst_free(BSTree *a);

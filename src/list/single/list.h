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

#ifndef LIST_H
#define LIST_H

/**
 * Shared struct definition because we have multiple source files
 * which need to know how the internal struct is implemented
 */
struct node {
    int data;
    struct node *next;
};

/** Public type List for Singly Linked Lists */
typedef struct node List;

#define EMPTY_LIST (List*) 0

/**
 * @brief create a new list instance
 */
List* list_create(void);

/**
 * @brief Insert a new element on the beginning of the list
 * @param l List to insert \p data on
 * @param data integer value to insert on
 * @return the updated list
 */
List* list_insert(List *l, int data);

/**
 * @brief Insert a new element on the end of the list
 * @param l List to insert \p data on
 * @param data integer value to insert on
 * @return the updated list
 */
List* list_append(List *l, int data);

/**
 * @brief Ordered insert of a new element in the list
 * @param l List to insert \p data on
 * @param data integer value to insert on
 * @return the updated list
 */
List* list_insert_ord(List *l, int data);

/**
 * @brief Search on the list by data and return the node which contains it
 * @param l List to insert \p data on
 * @param data integer value to search on
 * @return the node to return it
 */
List* list_search(List *l, int data);

/**
 * @brief Print the list without a new line
 * @param l the list to print
 */
void list_print(List *l);


/**
 * @brief Print the list with a new line
 * @param l the list to print
 */
void list_println(List *l);


/**
 * @brief Remove specific element from List
 * @param l List to insert \p data on
 * @param data integer value to remove
 * @return new list without the node which contains \p data
 */
List* list_remove(List *l, int data);

/**
 * @brief Free memory of List and its nodes
 */
void list_free(List *l);

/**
 * @brief Verify if the list is empty
 * @return 1 if empty and 0 if is not
 */
int list_empty(List *l);

/**
 * @brief Create a list based on its variadic arguments
 * @param size_list number of paramaters passed to the function
 */
List* list(int size_list,...);

/**
 * @brief Get the data from last element
 */
int list_last(List *l);

/**
 * @brief Get the data from the first element
 */
int list_head(List *l);

/**
 * @brief Get the tail of the list
 */
List* list_tail(List *l);

/**
 * @brief Get and pop the head of the list
 */
int list_pop_head(List** l);

/**
 * @brief Get and pop the last element of the list
 */
int list_pop_last(List** l);

/**
 * @brief Check if two lists are equal
 */
int list_equal(List* l_x, List* l_y);

#endif

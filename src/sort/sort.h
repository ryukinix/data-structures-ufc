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

#ifndef SORT_H
#define SORT_H

#define Type int
#define Formater "%d"

/* Apply BubbleSort Algorithm on the v */
void bubblesort(Type *v, int n);

/* Apply the InsertionSort Algorithm on the v */
void insertionsort(Type *v, int n);

/* Apply the MergeSort Algorithm on the v */
void mergesort(Type *v, int n);

/* Apply the QuickSort Algorithm on the v */
void quicksort(Type *v, int n);

/* Apply the HeapSort Algorithm on the v */
void heapsort(Type *v, int n);

/* Print the v in a pretty format */
void print_vector(Type *v, int n);

/* Swap the values between e1 and e2 */
void swap(Type *e1, Type *e2);

#endif

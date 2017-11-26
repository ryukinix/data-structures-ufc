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

#ifndef PQUEUE_H
#ifndef PQUEUE_SIZE
#define PQUEUE_SIZE 10
#endif

#define HEAP_EMPTY_CELL -1

typedef struct pqueue_t PQueue;

PQueue* pqueue_create();

void pqueue_insert(PQueue *pq, int x);

int pqueue_extract_max(PQueue *pq);

void pqueue_increase_keys(PQueue *pq, int k, int v);

int pqueue_maximum(PQueue *pq);

void pqueue_free(PQueue *pq);

void pqueue_print(PQueue *pq);

void pqueue_println(PQueue *pq);

#endif

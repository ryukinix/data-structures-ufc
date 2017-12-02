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


#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <string.h>

#define SIZES 5
#define EXP 5

const int sizes[] = {1E2, 1E3, 1E4, 1E5, 1E6};

// HACK: Macro for expanding testing by name of algorithm (ALGO)
//       STORE: matrix to save the values as double v[SIZES][EXP+1]
#define BENCHMARK_ALGORITHM(ALGO, STORE)                                \
    printf("== Testing algorithm: %s\n", #ALGO);                        \
    for (int i = 0; i < SIZES; i++) {                                   \
        int n = sizes[i];                                               \
        STORE[i][0] = n;                                                \
        for (int j = 1; j < EXP+1; j++) {                               \
            int *v = random_vector(n);                                  \
            clock_t start = clock();                                    \
            ALGO(v, n);                                                 \
            clock_t end = clock();                                      \
            assert(check_sorted(v, n));                                 \
            STORE[i][j] = (double)1000*(end-start)/CLOCKS_PER_SEC;      \
            free(v);                                                    \
        }                                                               \
        printf("%d/%d :: %d elements\n", i+1, SIZES,  sizes[i]);        \
    }                                                                   \
    save_csv(#ALGO, STORE);                                             \

// save a csv file based on the name of algorithm like 'quicksort'
void save_csv(char *algorithm, double times[SIZES][EXP+1]) {
    char filename[80];
    sprintf(filename, "%s.csv", algorithm);
    FILE *fp = fopen(filename,"w");

    fprintf(fp,"Elements,");
    for(int i = 0; i < EXP; i++) {
        fprintf(fp, "Time_%d(ms),", (i+1));
    }
    fprintf(fp, "\n");

    for(int i = 0; i < SIZES; i++){
        fprintf(fp, "%d,", (int)times[i][0]);
        for(int j = 1; j < EXP+1; j++) {
            fprintf(fp,"%.3lf,", times[i][j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);

}


int main(void) {
    double times_measured[SIZES][EXP+1];
    BENCHMARK_ALGORITHM(quicksort, times_measured);
    BENCHMARK_ALGORITHM(heapsort, times_measured);
    BENCHMARK_ALGORITHM(mergesort, times_measured);
    BENCHMARK_ALGORITHM(insertionsort, times_measured);
    BENCHMARK_ALGORITHM(bubblesort, times_measured);
    return 0;
}

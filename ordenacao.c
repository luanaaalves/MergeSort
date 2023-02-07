/*========= IMPLEMENTACAO DAS FUNCOES =========*/

#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"
#include "vet.h"

/*=========================  mergeSort  =========================*/
void merge(int* v, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1 + 1];
    int R[n2 + 1];

    for(size_t i = 0; i < n1; i++)
        L[i] = v[p + i];
    for(size_t j = 0; j < n2; j++)
        R[j] = v[q + j + 1];
    
    L[n1] = __INT_MAX__;
    R[n2] = __INT_MAX__;

    int i = 0;
    int j = 0;
    for(size_t k = p; k < r + 1; k++) {
        if(L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        }
        else {
            v[k] = R[j];
            j++;
        }
    }
}

void MergeSort(int* v, int p, int r) {
    if(p < r) {
        int q = (p + r) / 2;
        MergeSort(v, p, q);
        MergeSort(v, q + 1, r);
        merge(v, p, q, r);
    }
}

void mergeSort(int n, int* v) {
    MergeSort(v, 0, n - 1);
}


/*========= IMPLEMENTACAO DAS FUNCOES =========*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vet.h"

/*=========================  sortearNum  =========================*/
int sortearNum(int min, int max) {
    return min + (rand() % max);
}

/*=========================  criaVetorEmbaralhado  =========================*/
int *criaVetorEmbaralhado(int n) {
    int* vet = (int*)malloc(n*sizeof(int));

    for (size_t i = 0; i < n; i++)
    	vet[i] = i + 1;
    
	for (size_t i = 0; i < n; i++) {
        int novo = sortearNum(0, n - 1);
        int tmp = vet[i];
        vet[i] = vet[novo];
        vet[novo] = tmp;
    }
    return vet;
}

/*=========================  imprimeVetor  =========================*/
void imprimeVetor(int *vet, int n) {
    printf("[");
    for (size_t i = 0; i < n; i++)
        if(i < n - 1)
            printf("%d, ", vet[i]);
        else
            printf("%d]\n", vet[i]);
}

/*=========================  liberaArray  =========================*/
void troca(int *v, int a, int b) {
    int tmp = v[a];
    v[a] = v[b];
    v[b] = tmp;
}

/*=========================  liberaArray  =========================*/
void liberaArray(int *vet) {
    free(vet);
}
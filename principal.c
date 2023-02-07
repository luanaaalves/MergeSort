#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vet.h"
#include <math.h>
#include "ordenacao.h"

int main (void) {

    srand(time(NULL));

    int n1 = 10000;
    int* vetor1 = criaVetorEmbaralhado(n1);

    //imprimeVetor(vetor1, 10000);

    mergeSort(10000, vetor1);
    //imprimeVetor(vetor1, 10000);

    liberaArray(vetor1);
}
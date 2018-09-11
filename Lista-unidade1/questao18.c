#include <stdio.h>
#include <stdlib.h>

void printVetor(int *vet, int n) {
    printf("[ ");
    for(int i=0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf(" ]\n");
}

int vetorAdd(int *vet1, int *vet2, int *soma, int n){
    for(int i = 0; i < n; i++) {
        soma[i] = vet1[i] + vet2[i];
    }
}

int main() {

    int n;
    printf("ente com a quantiade de itens dos vetores: ");
    scanf("%d", &n);

    int *vet1 = (int *)malloc(n * sizeof(int)),
    *vet2 = (int *)malloc(n * sizeof(int)),
    *soma = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        vet1[i] = rand() % 100; 
        vet2[i] = rand() % 100;       
    }

    printf("Vetor 1: ");
    printVetor(vet1, n);

    for(int i = 0; i < n; i++) {
        soma[i] = vet1[i] + vet2[i];
    }

    printVetor(vet2, n);

    printf("Soma dos vetores: ");
    vetorAdd(vet1, vet2, soma, n);
    printVetor(soma, n);

    return 0;
}

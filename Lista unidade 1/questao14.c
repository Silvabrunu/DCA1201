#include <stdio.h>
#include <stdlib.h>

void printVetor(float *vet, int n) {
    printf("[ ");
    for(int i=0; i < n; i++) {
        printf("%f ", vet[i]);
    }
    printf(" ]\n");
}

void insertSort(float *vet, int n) {
    if(n > 0) {
        insertSort(vet, n-1);
        float x = vet[n];
        int j = n-1;

        while(j >= 0 && vet[j] > x){
            vet[j+1] = vet[j];
            j--;
        }

        vet[j+1] = x;
    }
}

int main() {
    int n;
    printf("Entre com a quantiade de itens: ");
    scanf("%d", &n);

    float *vet = (float *)malloc(n * sizeof(float));

    printf("Preencha o vetor: ");
    for(int i = 0; i < n; i++) {
        scanf("%f", vet + i);
    }

    printf("\n Vetor inserido: ");
    printVetor(vet, n);

    printf("Vetor ordenado: ");
    insertSort(vet, n-1);
    printVetor(vet, n);

    free(vet);

    return 0;
}

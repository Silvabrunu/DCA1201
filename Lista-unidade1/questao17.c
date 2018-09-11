#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void insertSort(int *vet, int n) {
    if(n > 0) {
        insertSort(vet, n-1);
        int x = vet[n];
        int j = n-1;

        while(j >= 0 && vet[j] > x){
            vet[j+1] = vet[j];
            j--;
        }

        vet[j+1] = x;
    }
}

int compara(const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
}

int main() {
    clock_t start_t, end_t;
    int n = 100000;
   
    int *vet1 = (int *)malloc(n * sizeof(int)),
    *vet2 = (int *)malloc(n * sizeof(int)),
    *vet3 = (int *)malloc(n * sizeof(int));

    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        *(vet1 + i) = rand() % 100;        
    }

    memcpy(vet2, vet1, n * sizeof(int));
    memcpy(vet3, vet1, n * sizeof(int));

    start_t = clock();
    insertSort(vet1, n-1);
    end_t = clock();
    printf("a inserção(insertSort) levou : %fs\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);
    free(vet1);

    start_t = clock();
    qsort(vet2, n, sizeof(int), compara);
    end_t = clock();
    printf("Qsort levou: %fs\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);
    free(vet2);

    void (*pont_qsrot)(void *vet, size_t n, size_t size, int(*comp)(const void *, const void *));
    pont_qsrot = qsort;

    start_t = clock();
    pont_qsrot(vet3, n, sizeof(int), compara);
    end_t = clock();
    printf("Qsort pelo ponteiro levou: %fs\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);
    free(vet3);

    return 0;
}

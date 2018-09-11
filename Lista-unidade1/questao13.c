#include <stdio.h>

int soma(int a, int b){
    return a + b;
}

int main() {
    int x, y, z;
    int (*p)(int, int);
    printf("entre com dois numeros: ");
    scanf("%d %d", &x, &y);
    p = soma;
    z = p(x, y);
    printf("a soma é = %d\n", z);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char   a[4];
    int    b[4];
    float  c[4];
    double d[4];

    printf("v = [");    
    for(int i = 0; i < 4; i++) {
        printf("  %p\n", a + i);
    }
    printf("]\n");

    printf("x = [");    
    for(int i = 0; i < 4; i++) {
        printf("  %p\n", b + i);
    }
    printf("]\n");

    printf("y = [");    
    for(int i = 0; i < 4; i++) {
        printf("  %p\n", c + i);
    }
    printf("]\n");
    
    printf("z = [");    
    for(int i = 0; i < 4; i++) {
        printf("  %p\n", d + i);
    }
    printf("]\n");
}


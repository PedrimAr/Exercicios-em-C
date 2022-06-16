#include <stdio.h>

void main() {
    int x;
    printf("= TABUADA = ");
    printf("\n\nDigite o número para calcular sua tabuada: ");
    scanf("%d", &x);
    printf("\n\nTABUADA:");
    for(int y =  1; y <= 10; y++) {
        printf("\n%dx%d = %d", x, y, x * y);
    }
}

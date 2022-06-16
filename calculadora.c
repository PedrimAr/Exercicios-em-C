#include <stdio.h>

void main() {
	int x;
    int y;
    int op;
    printf("= CALCULADORA DO POLVO =");
    printf("\n\nDigite o primeiro numero: ");
    scanf("%d", &x);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &y);
    printf("\nEscolha a operação que quer efetuar: ");
    printf("\n[1] SOMA\n[2] SUBTRAÇÃO\n[3] MULTIPLICACAO\n[4] DIVISAO\n");
    scanf("%d", &op);
    if(op == 1) {
        printf("\nRESULTADO:\n %d+%d = %d", x, y, x + y);
    }
    else if(op == 2) {
        printf("\nRESULTADO:\n %d-%d = %d", x, y, x - y);
    }
    else if(op == 3) {
        printf("\nRESULTADO:\n %dx%d = %d", x, y, x * y);
    }
    else if(op == 4) {
        printf("\nRESULTADO:\n %d/%d = %.2f", x, y, x / y);
    }
}

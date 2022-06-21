#include <stdio.h>

void main() {
	  float x;
    float y;
    int op;
    printf("= CALCULADORA DO POLVO =");
    printf("\n\nDigite o primeiro numero: ");
    scanf("%f", &x);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &y);
    printf("\nEscolha a operação que quer efetuar: ");
    printf("\n[1] SOMA\n[2] SUBTRAÇÃO\n[3] MULTIPLICACAO\n[4] DIVISAO\n[5] POTENCIACAO\n[6] RADICIACAO\n");
    scanf("%d", &op);
    if(op == 1) {
        printf("\nRESULTADO:\n %.2f+%.2f = %.2f", x, y, x + y);
    }
    else if(op == 2) {
        printf("\nRESULTADO:\n %.2f-%.2f = %.2f", x, y, x - y);
    }
    else if(op == 3) {
        printf("\nRESULTADO:\n %.2fx%.2f = %.2f", x, y, x * y);
    }
    else if(op == 4) {
        printf("\nRESULTADO:\n %.2f/%.2f = %.2f", x, y, x / y);
    }
    else if(op == 5){
        float res = pow(x, y);
        printf("\nRESULTADO:\n%.2f", res);
    }
    else if(op == 6){
        float res = pow(x, (1 / y));
        printf("\nRESULTADO:\n%.2f", res);
    }
    else{
        printf("\nNumero invalido!");
    }
}

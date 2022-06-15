#include <stdio.h>

void main () 
{
    char nome[10];
    char raca[20];
    int idade;
    printf("Digite o nome do cao: ");
    gets(nome);
    printf("\nDigite a raca do cao: ");
    gets(raca);
    printf("\nDigite a idade do cao: ");
    scanf("%d", &idade);
    printf("\nFicha do cão: \n Nome: %s \n Raca: %s \n Anos: %d", nome, raca, idade);
}

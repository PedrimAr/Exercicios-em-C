//A intenção do seguinte programa é dizer quantas vogais tem em um nome.

#include <stdio.h>

void main() { // Aqui é criada a função main, do tipo void.
    int count; // Aqui é declarada a variável count, do tipo int.
    int vogais = 0; // Aqui é declarada a cariável vogais, do tipo int.
    char nome[100]; // Aqui é declarado a string chamada nome.
    printf("Digite seu nome: "); // Aqui é printada a mensagem para que o nome seja digitado.
    gets(nome); // Aqui é atribuído conteúdo à string nome, oriundo do teclado.
    for(count = 0; count < 100; count++) { // Aqui é iniciado o for
        if(nome[count] == 'a' || nome[count] == 'e' || nome[count] == 'i' || nome[count] == 'o' || nome[count] == 'u'){ // Aqui é verificado se há vogal
            vogais += 1; // Aqui é adicionado 1 há variável vogais quando é encontrada uma vogal
        }
    }
    printf("\n| Seu nome possui %d vogais! |", vogais); // Aqui é printada a mensagem dizendo quantas vogais o nome digitado tem.
}

// Aluno: Pedro do Amaral Rangel
// O intuito desse programa e receber o nome, a media e o numero de faltas de um aluno, e dizer se esse aluno foi aprovado (ou não) e sua media. E se reprovado, porque.

#include <stdio.h>

void main()
{
   int opcao;
   char nome[100];
   float media;
   int faltas;
   int count = 0;
   int i = 0;
   char contrabarra[2];
   while(i = 0) {
      printf("[1]Informacoes sobre faltas\n[2]Informacoes sobre notas\n[3]Verificar aprovacao\n");
      scanf("%d", &opcao);
      gets(contrabarra);
      switch (opcao)
      {
      case 1:
         printf("\nO aluno deve estar presente em pelo menos 75%% das aulas.");
         i++;
         break;
      
      case 2:
         printf("\nO aluno deve possuir media aritmetica calculada entre os 3 trimestres de no minimo 6.0.\nCaso isso não ocorra terá oportunidade de fazer prova final, em que a nota somada a media final deve resultar em no minimo 12.");
         i++;
         break;

      case 3:
         while(count == 0) {
            printf("\n== VERIFICADOR DE APROVACAO ==");
            printf("\n\nDigite seu nome:");
            gets(nome);
            printf("\nDigite sua media final: ");
            scanf("%f", &media);
            printf("\nDigite seu número de faltas: ");
            scanf("%d", &faltas);
            if (media < 0 || media > 10 || faltas < 0)
            {
               printf("\n\nPreencha novamente! Algum campo não foi preenchido ou alguma resposta é inválida.");
            }
            else
            {
               count ++;
            }
         }
         if (media < 6.0 && faltas < 100)
         {
            printf("\n\nVoce foi reprovado com uma media de: %.2f", media);
         }
         else if (media >= 6.0 && faltas >= 100)
         {
            printf("\n\nVoce foi reprovado com %d faltas", faltas);
         }
         else if (media < 6.0 && faltas >= 100)
         {
            printf("\nVoce foi reprovado por ter %d faltas e media: %.2f", faltas, media);
         }
         else
         {
            printf("\nVocê foi aprovado com media: %.2f", media);
         }
         i++;
         break;

      default:
         printf("\nVoce digitou um numero invalido! Escolha novamente.");
         break;
      }
   }
}
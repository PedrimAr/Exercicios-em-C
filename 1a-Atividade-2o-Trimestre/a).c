// Aluno: Pedro do Amaral Rangel
// O intuito desse programa e receber o nome, a media e o numero de faltas de um aluno, e dizer se esse aluno foi aprovado (ou não) e sua media. E se reprovado, porque.

#include <stdio.h> 

void main()
{
   char nome[100]; // Cria-se uma String de nome
   float media; // Aqui se cria um float de media
   int faltas; // Criado int para contar faltas
   int count = 0; // Aqui foi criada uma variavel para determinar o funcionamento do while
   while(count == 0) { // While iniciado, com a condicao de que count seja igual a 0
      printf("== VERIFICADOR DE APROVACAO ==");
      printf("\n\nDigite seu nome:");
      gets(nome); // E armazenado o nome na String
      printf("\nDigite sua media final: ");
      scanf("%f", &media); // E armazenada a media no float
      printf("\nDigite seu número de faltas: ");
      scanf("%d", &faltas); // E armazenado o numero de faltas no int
      if (media < 0 || media > 10 || faltas < 0) 
      {
         printf("\n\nPreencha novamente! Algum campo não foi preenchido ou alguma resposta é inválida."); // Se for digitada uma media ou numero de faltas irreais, o menu deverá ser preenchido novamente
      }
      else
      {
         count ++; // Se for preenchido corretamente dará fim ao loop
      }
   }
   if (media < 6.0 && faltas < 100)
   {
      printf("\n\nVoce foi reprovado com uma media de: %.2f", media); // Se a media for menor que 6, sera printado que o aluno foi reprovado por sua media
   }
   else if (media >= 6.0 && faltas >= 100)
   {
      printf("\n\nVoce foi reprovado com %d faltas", faltas); //Se o numero de faltas for maior ou igual a 100, sera printado que o aluno foi reprovado por suas faltas
   }
   else if (media < 6.0 && faltas >= 100)
   {
      printf("Voce foi reprovado por ter %d faltas e media: %.2f", faltas, media); // Se o aluno tiver media ruim e numero de faltas exagerado, sera printado que o aluno foi reprovado por conta das duas informacoes
   }
   else
   {
      printf("Você foi aprovado com media: %.2f", media); // Se o aluno tiver media e numero de faltas dentro do esperado, sera printado que ele foi aprovado
   }
}
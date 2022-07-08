#include <stdio.h>

double overall(double tec, double fis, double men, double tat)
{
  double media = (tec + fis + men + tat) / 4;
  return media;
}

void main()
{
  char nome[50];
  char contrabarra[2];
  double tec;
  double fis;
  double men;
  double tat;
  int i = 0;
  printf("|| Sem bem vindo ao Polvo Sports! ||\n\nAqui voce pode calcular a habilidade geral de algum jogador ou, até mesmo, comparar 2 jogadores.\n");
  while(i == 0)
  {
    int op;
    printf("\nO que deseja fazer?\n[1]Habilidade Jogador  [2] Comparar\n");
    scanf("%d", &op);
    gets(contrabarra);
    if(op < 1 || op > 2)
    {
      printf("\nVoce escolheu uma opcao inexistente. Por favor, digite um novo numero!\n");
    }
    else if(op == 1)
    {
      printf("\nDigite o nome do jogador:\n");
      gets(nome);
      printf("\nDigite seu atributo de tecnica:\n");
      scanf("%lf", &tec);
      printf("\nDigite seu atributo de fisico:\n");
      scanf("%lf", &fis);
      printf("\nDigite seu atributo mental:\n");
      scanf("%lf", &men);
      printf("\nDigite seu atributo de tatica:\n");
      scanf("%lf", &tat);
      gets(contrabarra);
      printf("\nA habilidade geral do %s é: %2.lf\n", nome, overall(tec, fis, men, tat));
      int j = 0;
      while(j == 0)
      {
        char opcao;
        printf("\n\nEstá satisfeito ou deseja fazer mais cálculos?\n[s]Sim, estou satisfeito!\n[n]Nao, quero fazer mais cálculos!\n");
        scanf("%c", &opcao);
        if(opcao != 's' && opcao != 'n')
        {
          printf("\nVoce escolheu uma opcao inexistente. Por favor, digite 's' ou 'n'!\n");
        }
        else if(opcao == 's')
        {
          printf("\nOk! Volte sempre.\n");
          i++;
          j++;
        }
        else if(opcao == 'n')
        {
          j++;
        }
      }
    }
    else if(op == 2)
    {
      printf("\nDigite o nome do primeiro jogador:\n");
      gets(nome);
      printf("\nDigite seu atributo de tecnica:\n");
      scanf("%lf", &tec);
      printf("\nDigite seu atributo de fisico:\n");
      scanf("%lf", &fis);
      printf("\nDigite seu atributo mental:\n");
      scanf("%lf", &men);
      printf("\nDigite seu atributo de tatica:\n");
      scanf("%lf", &tat);
      gets(contrabarra);
      char nome2[50];
      double tec2;
      double fis2;
      double men2;
      double tat2;
      printf("\nDigite o nome do segundo jogador:\n");
      gets(nome2);
      printf("\nDigite seu atributo de tecnica:\n");
      scanf("%lf", &tec2);
      printf("\nDigite seu atributo de fisico:\n");
      scanf("%lf", &fis2);
      printf("\nDigite seu atributo mental:\n");
      scanf("%lf", &men2);
      printf("\nDigite seu atributo de tatica:\n");
      scanf("%lf", &tat2);
      gets(contrabarra);
      printf("\nA habilidade geral do %s é: %2.lf\n", nome, overall(tec, fis, men, tat));
      printf("\nA habilidade geral do %s é: %2.lf\n", nome2, overall(tec2, fis2, men2, tat2));
      if(overall(tec, fis, men, tat) > overall(tec2, fis2, men2, tat2))
      {
        printf("\nO %s é melhor!\n", nome);
        int j = 0;
        while(j == 0)
        {
          char opcao;
          printf("\n\nEstá satisfeito ou deseja fazer mais cálculos?\n[s]Sim, estou satisfeito!\n[n]Nao, quero fazer mais cálculos!\n");
          scanf("%c", &opcao);
          if(opcao != 's' && opcao != 'n')
          {
            printf("\nVoce escolheu uma opcao inexistente. Por favor, digite 's' ou 'n'!\n");
          }
          else if(opcao == 's')
          {
            printf("\nOk! Volte sempre.\n");
            i++;
            j++;
          }
          else if(opcao == 'n')
          {
            j++;
          }
        }
      }
      else if(overall(tec, fis, men, tat) < overall(tec2, fis2, men2, tat2))
      {
        printf("\nO %s é melhor!\n", nome2);
        int j = 0;
        while(j == 0)
        {
          char opcao;
          printf("\n\nEstá satisfeito ou deseja fazer mais cálculos?\n[s]Sim, estou satisfeito!\n[n]Nao, quero fazer mais cálculos!\n");
          scanf("%c", &opcao);
          if(opcao != 's' && opcao != 'n')
          {
            printf("\nVoce escolheu uma opcao inexistente. Por favor, digite 's' ou 'n'!\n");
          }
          else if(opcao == 's')
          {
            printf("\nOk! Volte sempre.\n");
            i++;
            j++;
          }
          else if(opcao == 'n')
          {
            j++;
          }
        }
      }
    }
  }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Declaração de variáveis
  char nome[100];
  int dia, mes, ano;
  int ano_atual = 2023;

  // Entrada de dados
  printf("Insira o nome : ");
  scanf("%s", nome);
  printf("Insira o dia de nascimento: ");
  scanf("%d", &dia);
  printf("Insira o mês de nascimento: ");
  scanf("%d", &mes);
  printf("Insira o ano de nascimento: ");
  scanf("%d", &ano);

  // Cálculo da idade
  int idade = ano_atual - ano;

  // Saída de dados
  printf("O nome é %s e sua idade é %d anos.\n", nome, idade);

  return 0;
}

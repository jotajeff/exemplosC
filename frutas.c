#include <stdio.h>

int main() {
  // Declaração de variáveis
  char frutas[][20] = {"banana", "maçã", "laranja", "uva", "melancia", "abacaxi"};
  int tamanho = sizeof(frutas) / sizeof(frutas[0]);
  int posicao;

  // Entrada de dados
  printf("Insira a posição da fruta: ");
  scanf("%d", &posicao);

  // Validação de dados
  if (posicao < 0 || posicao >= tamanho) {
    printf("Posição inválida!");
    return 0;
  }

  // Saída de dados
  printf("A fruta da posição %d é: %s\n", posicao, frutas[posicao]);

  return 0;
}

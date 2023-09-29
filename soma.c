#include <stdio.h>

int main() {
  // Declaração de variáveis
  float numero1, numero2, soma;

  // Entrada de dados
  printf("Insira o primeiro número: ");
  scanf("%f", &numero1);
  printf("Insira o segundo número: ");
  scanf("%f", &numero2);

  // Cálculo da soma
  soma = numero1 + numero2;

  // Saída de dados
   printf("A soma dos dois números é: %.2f\n", soma);

  return 0;
}

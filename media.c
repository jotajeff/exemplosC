#include <stdio.h>

int main() {
  // Declaração de variáveis
  float nota1, nota2, nota3, media;

  // Entrada de dados
  printf("Insira a primeira nota: ");
  scanf("%f", &nota1);
  printf("Insira a segunda nota: ");
  scanf("%f", &nota2);
  printf("Insira a terceira nota: ");
  
  scanf("%f", &nota3);

  // Cálculo da média
  media = (nota1 + nota2 + nota3) / 3;

  // Avaliação do resultado
  if (media >= 7) {
    printf("Aprovado! A média é: %.2f\n", media);
  } else {
    printf("Reprovado! A média é: %.2f\n", media);
  }

  return 0;
}

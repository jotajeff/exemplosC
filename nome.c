#include <stdio.h>
#include <string.h>

int main() {
  // Declaração de variáveis
  char nome[100];
  int tamanho;

  // Entrada de dados
  printf("Insira o seu nome: ");
  scanf("%s", nome);

  // Saída de dados
  printf("O seu nome é : %s\n", nome);

  // Nome ao contrário
  tamanho = strlen(nome);
  for (int i = tamanho - 1; i >= 0; i--) {
    printf("%c", nome[i]);
  }
  printf(" - Nome ao contrário : \n");

  // Número de caracteres
  printf("O seu nome tem %d caracteres.\n", tamanho);

  return 0;
}

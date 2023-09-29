#include <stdio.h>

int main(void)
{
  float notas[] = {7, 8, 9.5, 9.9, 5.2, 6};
  int tamanho = sizeof(notas) / sizeof(notas[0]);

  float notaPreferida = notas[2];
  // declarando e inicializando o vetor notas

  printf("Exibindo os Valores do Vetor \n\n");
  printf("notas[0] = %.2f\n", notas[0]);
  printf("notas[1] = %.2f\n", notas[1]);
  printf("notas[2] = %.2f\n", notas[2]);
  printf("notas[3] = %.2f\n", notas[3]);
  printf("notas[4] = %.2f\n", notas[4]);
  printf("notas[5] = %.2f\n", notas[5]);
  printf("A nota preferida é  %.2f\n", notaPreferida );
  printf("\n");
  printf("-----------------------------");
  printf("\n");
  printf("Total de  notas %d\n",tamanho);


  return 0;
}

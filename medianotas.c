#include <stdio.h>

int main() {
  float notas[3];

  printf("Informe o valor da sua primeira nota: \n");
  scanf("%f", &notas[0]);

  printf("Informe agora o valor da sua segunda nota: \n");
  scanf("%f", &notas[1]);

  notas[2] = (notas[0] + notas[1]/2);

  printf("O valor da sua média é: %.2f\n", notas[2]);

  return 0;
}

#include <stdio.h>
#define TAM_ARRAY 100

int main() {

double notas[TAM_ARRAY];
FILE * arq;
int result;
int i;
arq = fopen ("arquivo.bin", "a+b");
if (!arq) {
  printf("Impossível criar arquivo\n");
  return -1;
}

result = fwrite(notas, sizeof(double), TAM_ARRAY, arq);
printf("Número de elementos gravados: %d", result);
fclose(arq);
return 0;

}

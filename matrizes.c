#include <stdio.h>
# define DIMENSAO 3
//Criar e exibir uma matriz 3x3
//Crie um aplicativo em C que peça ao usuário para preencher uma matriz 3x3 com valores inteiros e depois exiba essa matriz.

int main() {

int linha, coluna;
int matriz[DIMENSAO][DIMENSAO];


for (linha = 0; linha < DIMENSAO; linha ++) 
  for (coluna = 0; coluna < DIMENSAO; coluna++) {

      printf("Posições [%d][%d]: ", linha+1, coluna+1);
      scanf("%d", matriz[linha][coluna]);
  }

for (linha = 0; linha < DIMENSAO; linha++) {
  for (coluna = 0; coluna < DIMENSAO; coluna++)
  printf("%3d", matriz[linha][coluna]);

}




return 0;

}

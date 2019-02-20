#include <stdio.h>
#include <stdlib.h>

int main(void){
  int h;
  printf("Informe a hora atual: ");
  scanf("%d", &h);

  if (h >= 0 && h < 12){
    printf("\nBom dia!");
  } else if (h >= 12 && h < 18){
    printf("\nBoa tarde!");
  } else if (h >= 18 && h < 24){
    printf("\nBoa noite!");
  } else {
    printf("\nHora inválida!");
  }





  

  return 0;
}

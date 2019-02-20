#include <stdio.h>
#include <stdlib.h>

int main(){

  int a = 10;
  int b = 10;
  unsigned char c;
  unsigned char d;
  unsigned char e;

  c = (a == b);
  d = (a == c);
  e = (a == b || a == c);

  printf("O valor de c e: %d\n", c);
  printf("O valor de d e: %d\n", d);
  printf("O valor de e e: %d\n", e);

  return 0;

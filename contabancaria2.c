#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
  char nome[50];
  float saldo;
  unsigned int num_conta;
  unsigned int chave;
  char senha[4];
} conta;

typedef struct str_banco {
conta * cliente;
struct str_banco * prox;
} banco;

int main() {
  banco*lista_encadeada = 0;
  int opcao;
  printf("!!!MENU!!!");
  printf("1 - Criar conta\n");
  scanf("%d", &opcao);
  if (opcao==1) {
    //CRIANDO A CONTA
  conta * infosConta = (conta*) malloc(sizeof(conta));
  if( !infosConta ) return 1;
  printf("Informe seu nome: \n");
  
  gets(infosConta-> nome);
  
  
  printf("Nome digitado: %s", infosConta-> nome);

  return infosConta;


  //banco * novaConta = (banco*) malloc(sizeof(banco));
  


  }

#include <stdio.h>
#include <string.h>

typedef struct stt_contabancaria {
  int NumConta;
  char Cliente[100];
  float Saldo;
  int Senha;
  char Chave;
} contabancaria, listacliente[10];

void Menu () {
  
  printf("!!!MENU!!!\n");
  printf("1 - Criar conta\n");
  printf("2 - Consulte seu saldo\n");
  printf("3 - Fazer um depósito\n");
  printf("4 - Fazer um saque\n");
  printf("5 - Encerrar conta\n");
}
//CONTA
void Conta() {
  contabancaria conta, senha;

  conta.NumConta = 0;
  strcpy(conta.)


printf("A sua conta de número %d foi criada com sucesso!\n", );
}

void Saldo() {




}
void Deposito() {



}
void Saque() {



}
void Encerramento() {



}
int main(void) {

  int opcao, loop =1;
Menu();
scanf("%i", &opcao);

while(loop ==1) {
    switch (opcao) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        Menu();
        scanf("%d", &opcao);
        break;
      case 0:
      printf("Programa encerrado!\n");
      loop = 0;
        break;
      default:
        printf("Opção não existe, tente novamente: ");
        Menu();
        scanf("%i", &opcao);
        break;



    }
}

#include <stdio.h>
#include <string.h>

typedef struct stt_contabancaria {
  int numconta[5];
  char cliente[100];
  float saldo;
  int senha;
  char chave;
} contabancaria, lista_cliente[10];

void Menu () {
  
  printf("!!!MENU!!!\n");
  printf("1 - Criar conta:\n");
  printf("2 - Consulte seu saldo:\n");
  printf("3 - Fazer um depósito:\n");
  printf("4 - Realizar um saque:\n");
  printf("5 - Encerrar sua conta:\n");
}
//CONTA// Criar uma conta com número, senha e chave.
void Conta () {

  lista_cliente.senha = 12345
  strcpy(lista_cliente.nome, "NULL")
  lista_cliente.chave =  






printf("A sua conta de número %d foi criada com sucesso!\n", );
}

//SALDO// Consulta o saldo do cliente (entra com o numero da conta conferindo apenas a senha).

void Saldo() {
int saldo, senha;






}
//DEPÓSITO// Deposita um valor (entra com o numero da conta e confere o nome do cliente).
void Deposito() {
int numconta;
char cliente;


}
//SAQUE// Saca um valor (entra com o numero da conta e confere senha e chave, o cliente tem apenas autorização de sacar o seu dinheiro, conta sem limite).
void Saque() {



}
//ENCERRAMENTO// Encerre a conta ( entra com o numero da conta e confere senha e chave, faça uma pergunta para que o cliente confira a operação e apague seus dados).
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

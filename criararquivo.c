#include <stdio.h>

int main() {
FILE *arquivo = NULL;
char texto[100];

arquivo = fopen("exemplo.txt", "a+");
fprintf(arquivo, "Alô mundo\n");
fflush(arquivo);

arquivo = fopen("exemplo.txt", "a+");
fgets(texto, 100, arquivo);
printf("%s", texto);

return 0;

}

/** strcpy - copia string para outro array char
 strcmp - comparação entre duas strings
* strcat - concatenação de duas strings
* strlen - retorna tamanho da string.*/


void Copiar() {
char *strcpy (char* primeiro, char*segundo);
int i;

for (i = 0;i < strlen(primeiro); i++) {
primeiro[i] = segundo[i];

primeiro[i] = '\0';

return primeiro
}

int comparar(char*string1, char*string2) {
int i;

for (i = 0; string1[i] == string2[i]; i++) {
        if (string1[i] == 0) {
            return 1;
        }
    }

    return 2;
}

char* concatenar(char*str1[], char*str2[]) {
int i,j;

for (i = 0; str1[i] != '\0'; i++);
for (j =0; str2[j] != '\0'; j++){
str1[i] = str2[j];
}
str1[i] = '\0';
return str1;

}

int contador (const char *string) {
    int i = 0;
    for (; string[i] != 0; ++i);
    return i;
}


}

/** strcpy - copia string para outro array char
 strcmp - comparação entre duas strings
* strcat - concatenação de duas strings
* strlen - retorna tamanho da string.*/


void Copiar() {
char *strcpy (char* primeiro, char*segundo);
int i;

for (i = 0;i < strlen(primeiro); i++) {
primeiro[i] = segundo[1];

primeiro[i] = '\0';

return primeiro
}

int comparar(char*string1, char*string2) {
int i;

for (i = 0; i < strlrn(string1); i++) {
  while (strcmp (string1[i],string2[i]) != 0)
  return 0;
}  
}

int concatenar(char*str1, char*str2) {
  strcat(str1,str2);
  return strcat;
}

int tamanho (char*stringzinha) {
  int i;

  for (i = 0; i < srtlen(stringzinha); i++);
  return strlen(stringzinha)
}


}

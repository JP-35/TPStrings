#include <stdio.h>
#include <string.h>

int esPalindromo(char cadena[]) {
    int longitud = strlen(cadena);
    char inversa[100];
    int i, j;

    memset(inversa, 0, sizeof(inversa)); 
    for (i = longitud - 1, j = 0; i >= 0; i--, j++) {
        char temp[2] = {cadena[i], '\0'};
        strcat(inversa, temp);
    }

    if (strcmp(cadena, inversa) == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char cadena[100];
    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    cadena[strcspn(cadena, "\n")] = '\0';

    if (esPalindromo(cadena)) {
        printf("La cadena es un palindromo");
    } else {
        printf("La cadena no es un palindromo");
    }

    return 0;
}

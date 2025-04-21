#include <stdio.h>
#include <string.h>

int main() {
    char cadena[1000], *palabras[100];
    int i, contadorPalabras = 0;

    printf("Ingresa una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    cadena[strcspn(cadena, "\n")] = '\0';

    char *token = strtok(cadena, " ");
    while (token != NULL) {
        palabras[contadorPalabras++] = token;
        token = strtok(NULL, " ");
    }

    printf("La cadena invertida quedaria de la siguiente manera:\n");
    for (i = contadorPalabras - 1; i >= 0; i--) {
        printf("%s", palabras[i]);
        if (i > 0) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

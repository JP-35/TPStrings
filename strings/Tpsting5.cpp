#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[1000];
    int i, palabras = 0;
    int enPalabra = 0;

    printf("Ingresa una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    for (i = 0; cadena[i] != '\0'; i++) {
        if (isspace(cadena[i])) {
            enPalabra = 0; 
        } else if (!enPalabra) {
            enPalabra = 1; 
            palabras++;
        }
    }

    printf("El numero de palabras en la cadena es: %d\n", palabras);

    return 0;
}


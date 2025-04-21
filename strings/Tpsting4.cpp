#include <stdio.h>
#include <string.h>

int main() {
    char original[100];
    char caracter, caracternuevo;

    printf("Ingrese una cadena de texto: ");
    fgets(original, sizeof(original), stdin);
    original[strcspn(original, "\n")] = '\0'; 
    printf("Ingrese el caracter que desea reemplazar: ");
    scanf(" %c", &caracter);

    printf("Ingrese el nuevo caracter: ");
    scanf(" %c", &caracternuevo);

    char *current = strchr(original, caracter); 
    while (current != NULL) {
        *current = caracternuevo; 
        current = strchr(current + 1, caracter);
    }
    printf("Cadena modificada: %s\n", original); 

    return 0;

}


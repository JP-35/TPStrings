#include <stdio.h>
#include <string.h>

int main(){
	
	char palabra [50];
	char anagrama [50];
	int i=0,j=0,temp;
	
	printf("ingrese una palabra:");
	fgets(palabra, sizeof(palabra), stdin);
	
	palabra[strcspn(palabra, "\n")] = '\0';
	
	printf("ingrese otra palabra:");
	fgets(anagrama, sizeof(anagrama), stdin);
	
	anagrama[strcspn(anagrama, "\n")] = '\0';
	

	if (strlen(palabra) == strlen(anagrama)) {
        for (i = 0; i < strlen(palabra) - 1; i++) {
            for (j = i + 1; j < strlen(palabra); j++) {
                if (palabra[i] > palabra[j]) {
                    temp = palabra[i];
                    palabra[i] = palabra[j];
                    palabra[j] = temp;
                }
                if (anagrama[i] > anagrama[j]) {
                    temp = anagrama[i];
                    anagrama[i] = anagrama[j];
                    anagrama[j] = temp;
                }
            }
        }
        if (strcmp(palabra, anagrama) == 0) {
            printf("Son anagramas");
        } else {
            printf("No son anagramas");
        }
	}
	else {
		printf("no me haga perder el tiempo");
	}
	
}

#include <stdio.h>
#include <string.h>

int main(){

int cantA=0,cantE=0,cantI=0,cantO=0,cantU=0;

int i=0;

char cadena [50];

printf("Ingrese una cadena de caracteres:");
fgets(cadena, sizeof(cadena),stdin);

for (i; i<strlen(cadena);i++){
if (cadena[i] == 'a')
{ 
cantA++;
}

if (cadena[i] == 'e')
{ 
cantE++;
}

if (cadena[i] == 'i')
{ 
cantI++;
}

if (cadena[i] == 'o')
{ 
cantO++;
}

if (cadena[i] == 'u')
{ 
cantU++;
}
}


printf("La cadena de caracteres tiene: \n A:%d \n E:%d \n I:%d \n O:%d \n U:%d",cantA, cantE, cantI, cantO, cantU);

}

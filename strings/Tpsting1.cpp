#include <stdio.h>
#include <string.h>

int main(){
	
	char nombre[20];
	
	char apellido[20];
	
	printf("ingrese su nombre:");
	
	scanf("%s",&nombre);
	
	printf("ingrese su apellido:");
	
	scanf("%s",&apellido);
	
	strcat(nombre, apellido);
	
	
	printf("%s",nombre);
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <string.h>


int main(){
	
	char palabra1[50];
	char palabra2[50];
	char palabracopiada[50];
	printf("Ingrese una palabra:");
    fgets(palabra1, 50, stdin);
    printf("Ingrese otra palabra:");
    fgets(palabra2, 50, stdin);
	int cantpalabras = strlen(palabra1);
	printf("La palabra %s tiene %i letras\n\n", palabra1, cantpalabras);
	
	if (strcmp(palabra1, palabra2)==0){
	    printf("Son la misma plabra WIIII");
	    
	}
	else{
	    printf("No es la misma palabra, no hay WIIIII");
	    strcpy(palabracopiada, palabra1);
	    printf("\nPero %s es la palbra1 ", palabracopiada);
	}
	
	strcat(palabra1, " ");
	strcat(palabra1, palabra2);
	printf("\nNombre completo %s", palabra1);
	
	
	getch();
	return 0;
	
}

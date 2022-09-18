/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>


void  cargar(char palabra[20]){
    printf("Ingrese una palabra:");
    gets(palabra);
    return;
}

int cant_Vocales(char palabra [20]){
    int cant = 0;
    int x = 0;
    
    while(palabra[x]!='\0'){
        
        if(palabra[x] == 'a' || palabra[x] == 'e' || palabra[x] == 'i' ||
           palabra[x] == 'o' || palabra[x] == 'u'){
               
               cant++;
           }
           x++;
    }
    return cant;
}




int main(){
    char pal[20];
    cargar(pal);
    printf("La palabra %s contiene %d vocales", pal, cant_Vocales(pal));
    getch();
    return 0;
}

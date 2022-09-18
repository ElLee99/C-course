/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Punteros

#include <stdio.h>
#include <conio.h>
#include <string.h>

/*Problema 1

int main(){
    
    int valor1 = 25;
    //int valor2 = 35;
    int *pe;
    
    pe = &valor1;
    printf("Lo apuntado por el valor 1 es %d : \n", *pe);
    printf("La direccion que almacena *pe es %p : \n", pe );
    
    getch();
    return 0;
}
*/


//Problema 2

/*int main (){
    int x1, x2;
    int *pe;
    
    pe = &x1;
    *pe = 100;
    
    pe = &x2;
    *pe = 155;
    
    printf("X1 igual a : %d\n", x1);
    printf("X2 igual a : %d\n", x2);
}*/


//Funcion con puntero
/*
void cargar (int *pe1, int *pe2){
    
    *pe1 = 100;
    *pe2 = 200;
    
    return; 
}

int main(){
    
    int x1, x2;
    cargar(&x1, &x2);
    printf(" %d    %d ", x1, x2);
    getch();
    return 0;
    
}*/

//Funcion con puntero 2



void cargar(int *pe){
    
    for (int n=0; n<=4; n++){
        printf("Ingrese el valor %d ", n+1);
        scanf("%d", &*pe);
        pe=pe+1;
    }
    
    
    return;
}


void  mayor(int vector[5], int *pmay, int *pmen){
    
    int pmayor;
    int pmenor;

    
    pmayor = vector [0];
    pmenor = vector [0];
    
    for (int n = 0; n<5; n++){
        
        if (vector[n] > pmayor){
            pmayor = vector[n];
        }
   
        if (vector[n]< pmenor){
            pmenor = vector[n];
        }
   
    }
    *pmay = pmayor;
    *pmen = pmenor;
    
    return;  
}


int main(){
    
    int vector[5];
    int pmay;
    int pmen;
    cargar(&vector[0]);
    
    
    
    printf("%d   %d   %d   %d   %d", vector[0], vector[1], vector[2], vector[3], vector[4]);
    mayor(vector, &pmay, &pmen);
    printf("\n%d     %d", pmay, pmen);
    
    return 0;
}

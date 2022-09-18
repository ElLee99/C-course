/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <string.h>


struct producto {
    int codigo;
    char descripcion [40];
    float precio;
};



int main()
{
    struct producto pro1;
    
    printf("Ingrese la descipcion del producto: ");
    fflush(stdin);
    fgets(pro1.descripcion, 40, stdin);
    printf("Ingrese el codigo del producto: ");
    scanf("%i", &pro1.codigo);
    printf("Ingrese el precio: ");
    scanf("%f", &pro1.precio);

    
    
    printf("El codigo del producto 1 es: %d\n", pro1.codigo);
    printf("La descripción del producto 1 es: %s", pro1.descripcion);
    printf("El precio del producto 1 es: %f\n", pro1.precio);
    

    getch();
    return 0;
}

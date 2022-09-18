/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int *elements;
    int size;
    int cap;
}dyn_array;


//Initialize array
void init_Array(dyn_array *item){
    item -> size = 0;
    item -> elements = (int *)calloc(1, sizeof((*item).elements));
    item -> cap = 1;
}

//Increase capacity of array
void increase_Array(dyn_array *item){
    item -> elements = (int *)realloc(item -> elements, (5 + item -> cap ));
    if (item -> elements != NULL){
        item -> cap += 5;
    }
}


//Add elements
void add_Elements(dyn_array *item, int numero){
    if (item -> size < item -> cap){
        item -> elements [item -> size] = numero;
        item -> size ++;
    }
    else{
        printf("Need to expand the array");
    }
}
    

//Show array
void show_Array(dyn_array *item){
    for (int i = 0; i < item -> size; i++){
        printf("The elements of the array are %ld\n", (long int) item -> elements[i]);      //Lo mismo que (*item).elements
        printf("The adress of  the elements on the array are %ld\n", (long int) (&(*item).elements[i]));
    }  
    printf("The size of the array is %d\n", item -> size);              //Lo mismo que (*item).size
    printf("The capacity of the array is %d\n", item -> cap);           //Lo mismo que (*item).cap
}



int main()
{
    dyn_array arr;
    dyn_array *ptr = NULL;
    ptr = &arr;
    init_Array(ptr);
    add_Elements(ptr, 5);
    increase_Array(ptr);
    add_Elements(ptr, 8);
    show_Array(ptr);
    //free(ptr);
    return 0;
}
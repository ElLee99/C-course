/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h> 
void* square (const void* num); 
int main() { 
    int x; 
    int * sq_int; 
    x = 6; 
    sq_int = (int *) square(&x); 
    printf("%d squared is %d\n", x, *sq_int); 
    return 0; 
} 



void* square (const void *num) {
    static int result; 
    result = (*(int *)num) * (*(int *)num); 
    return &result; 
}
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct student{
    char name[50];
    int number;
    int age;
};

void showStudentData(struct student *st){
    printf("\nStudent:\n");
    printf("Name: %s\n", st->name);
    printf("Number: %d\n", st->number);
    printf("Age: %d\n", (*st).age);   //(*st).age es lo mismo que st->age
}

int main(){
    
    struct student st1 = {"Krishina", 5, 21};
    showStudentData(&st1);
    
    return 0;
}



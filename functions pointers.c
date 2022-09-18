/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*#include <stdio.h>

void say_hello(int num_times);
void say_bye(int num_times);


int main()
{
    void (*funptr) (int);       //Function pointer
    funptr = &say_bye;          //Pointer assignment
    *funptr(8);                 //Function call
    funptr = say_hello;
    funptr(3);
    
    return 0;
}

void say_hello(int num_times){
    int k;
    for (k = 0; k < num_times; k++){
        printf("Hello\n");
    }
}

void say_bye(int num_times){
    int k;
    for (k = 0; k < num_times; k++){
        printf("Bye\n");
    }
}
*/



#include <stdio.h> 
int add(int num1, int num2); 
int subtract(int num1, int num2); 
int multiply(int num1, int num2); 
int divide(int num1, int num2); 


int main() { 
    
    int x, y, choice, result; 
    //(*op[4])(int, int) = {add, subtract, multiply, divide}; Es lo mismo
    int (*op[4])(int, int); 
    op[0] = add; 
    op[1] = subtract; 
    op[2] = multiply; 
    op[3] = divide; 
    printf("Enter two integers: "); 
    scanf("%d%d", &x, &y); 
    printf("Enter 0 to add, 1 to subtract, 2 to multiply, or 3 to divide: "); 
    scanf("%d", &choice); result = op[choice](x, y); 
    printf("\n %d", result); 
    
    
    return 0; 
} 

int add (int x, int y) { 
    return(x + y); 
} 

int subtract (int x, int y) { 
    return(x - y); 
} 

int multiply (int x, int y) { 
    return(x * y); 
} 

int divide (int x, int y) { 
    if (y != 0) 
    return (x / y); 
    else return 0; 
} 
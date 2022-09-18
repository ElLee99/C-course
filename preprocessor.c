/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 
int main() { 
    
    int x;
    printf("TIME: %s \n", __TIME__); 
    printf("DATE: %s \n", __DATE__); 
    printf("FILE: %s \n", __FILE__); 
    printf("LINE: %d \n", __LINE__); 
    if (__STDC__ == 1)
        x = 1;
    else
        x = 0;
    printf("The compiler %d to ISO Standard C \n",\ 
    x);
    return 0; 

    
}



/*The # Operator

The # macro operator is called the stringification or stringizing operator and tells the preprocessor to convert a parameter to a string constant.
White space on either side of the argument are ignored and escape sequences are recognized.
*/

#include<stdio.h> 
#define greet(w) #w 

int main(){ 
    printf(greet(Hello World));   //No tiene comillas, convierte el parametro a una constante tipo string
    return 0; 
    
}


/*The ## operator is also called the token pasting operator because it appends, or "pastes", tokens together.
*/


#include <stdio.h> 
#define STICK(a, b) a##b 
int main() { 
    printf("%d\n", STICK(4, 2)); 
    return 0;
}






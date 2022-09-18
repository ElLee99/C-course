/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *ptr;
    //un bloque de 10 enteros
    ptr = malloc(10 * sizeof(*ptr));
    
    if (ptr != NULL){
        *(ptr + 2) = 50; //Asigna un 50 al tercer entero
    }
    printf("%d\n", *(ptr + 2));
    free(ptr);
    printf("%d\n", *(ptr + 2));
    return 0;
}


#include <stdio.h>

int main()
{
    typedef struct {
        int num;
        char *info;
    }record;
    
    record *recs;
    int num_recs = 2;
    //int k;
    char str[] = "This is information";
    
    recs = calloc(num_recs, sizeof(record));
    if (recs != NULL){
        for (int k = 0; k < num_recs; k++){
           (recs+k) -> num = k;
           (recs+k) -> info = malloc(sizeof(str));
           strcpy((recs+k)->info, str);
        } 
    }

    for (int k = 0; k <num_recs; k ++) { 
        printf ("%d  %s \n", (recs + k) -> num, (recs + k) -> info); 
    } 
    return 0;
}



#include <stdio.h>

int main()
{
    int *ptr;
    ptr = malloc(10 * sizeof(*ptr));
    if (ptr != NULL){
        *(ptr + 2) = 50;
    }

    ptr = realloc(ptr, 100 * sizeof(*ptr));
    *(ptr + 30) = 75;
    printf("Valor = %d\nDireccion = %d", *(ptr+30), (ptr+30));
    return 0;
}



#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  char *str;

  /* Initial memory allocation */
  str = (char *) malloc (15);	//Convierte el puntero tipo void que regresa la funciC3n a un puntero tipo char y reserva 15 bytes
  strcpy (str, "tutorialspoint");
  printf ("String = %s,  Address = %u\n", str, str);

  /* Reallocating memory */
  str = (char *) realloc (str, 25);
  strcat (str, ".com");
  printf ("String = %s,  Address = %u\n", str, str);

  free (str);

  return (0);
}



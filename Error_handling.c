/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*The exit command immediately stops the execution of a program and sends an exit code back to the calling process. For example, if a program is called by another program, then the calling program may need to know the exit status.

Using exit to avoid a program crash is a good practice because it closes any open file connections and processes.

You can return any value through an exit statement, but 0 for success and -1 for failure are typical. The predefined stdlib.h macros EXIT_SUCCESS and EXIT_FAILURE are also commonly used.
*/




#include <stdio.h>
#include <stdlib.h>
int
main ()
{
  int x = 10;
  int y = 0;
  int division;

  if (y != 0)
    {
      division = x / y;
      printf ("x/y = %d", division);
    }

  else
    {
      printf ("Divisor is 0.\nProgram exiting");
      exit (EXIT_FAILURE);
    }
  return 0;
}



/*Some library functions, such as fopen(), set an error code when they do not execute as expected. The error code is set in a global variable named errno, which is defined in the errno.h header file. When using errno you should set it to 0 before calling a library function.

To output the error code stored in errno, you use fprintf to print to the stderr file stream, the standard error output to the screen. Using stderr is a matter of convention and a good programming practice.

You can output the errno through other means, but it will be easier to keep track of your exception handling if you only use stderr for error messages.

To use errno, you need to declare it with the statement extern int errno; at the top of your program (or you can include the errno.h header file).
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

extern int errno;

int
main ()
{
  FILE *fptr;
  errno = 0;
  fptr = fopen ("c:\\noexistantfile.txt", "r");
  if (fptr == NULL)
    {
      fprintf (stderr, "Error opening file.\nError code: %d\n", errno);
      exit (EXIT_FAILURE);
    }

  fclose (fptr);
  return 0;
}

/*When a library function sets errno, a cryptic error number is assigned. For a more descriptive message about the error, you can use perror(). You can also obtain the message using strerror() in the string.h header file, which returns a pointer to the message text.

perror() must include a string that will precede the actual error message. Typically, there is no need for both perror() and strerror() for the same error, but both are used in the program below for demonstration purposes:
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *fptr;
    errno = 0;
    fptr = fopen ("c:\\noexistantfile.txt", "r");
    
    for (int n = 0; n < 135; n++){
        fprintf(stderr, "%d: %s\n", n, strerror(n));
    }
    
    if (fptr == NULL){
        perror("Error");
        fprintf(stderr, "%s\n", strerror(errno));    //para usar strerror es necesaria la libreria string.h
        exit(EXIT_FAILURE);
    }
    
    
    
    return 0;
}


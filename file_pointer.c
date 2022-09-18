/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*There are functions in stdio.h for controlling the location of the file pointer in a binary file:
ftell(fp) Returns a long int value corresponding to the fp file pointer position in number of bytes from the start of the file.
*/



#include <stdio.h>
#include <string.h>


    typedef struct {
        int id;
        char name [20];
    } item;
    
int main(){
    FILE *fptr;
    item first, second, secondf;
    
    //create records
    first.id = 10250;
    strcpy(first.name, "Widget");
    second.id = 16789;
    strcpy(second.name, "Gadget");
    
    //write records to a file
    fptr = fopen("info.dat", "wb");
    fwrite(&first, sizeof(first), 1, fptr);
    fwrite(&second, sizeof(second), 1, fptr);
    fclose(fptr);
    
    //file contains 2 records of type item
    fptr = fopen("info.dat", "rb");
    
    
    /*fseek(fp, num_bytes, from_pos) Moves the fp file pointer position by num_bytes bytes relative to position from_pos, which can be one of the following constants:
    SEEK_SET start of file
    SEEK_CUR current position
    SEEK_END end of file
    */
    
    //seek second record
    fseek(fptr, 1*sizeof(item), SEEK_SET); 
    fread(&second, 1, sizeof(item), fptr);
    printf("%d %s\n", second.id, second.name);
    fclose(fptr);
    return 0;
}

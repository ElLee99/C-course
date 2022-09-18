/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*fopen(filename, mode) Returns a FILE pointer to file filename which is opened using mode. If a file cannot be opened, NULL is returned.
Mode options are:
r open for reading (file must exist)
w open for writing (file need not exist)
- a open for append (file need not exist)
- r+ open for reading and writing from beginning
- w+ open for reading and writing, overwriting file
- a+ open for reading and writing, appending to file

fclose(fp) Closes file opened with FILE fp, returning 0 if close was successful. EOF (end of file) is returned if there is an error in closing.


The stdio.h library also includes functions for reading from an open file. A file can be read one character at a time or an entire string can be read into a character buffer, which is typically a char array used for temporary storage.

fgetc(fp) Returns the next character from the file pointed to by fp. If the end of the file has been reached, then EOF is returned.

fgets(buff, n, fp) Reads n-1 characters from the file pointed to by fp and stores the string in buff. A NULL character '\0' is appended as the last character in buff. If fgets encounters a newline character or the end of file before n-1 characters is reached, then only the characters up to that point are stored in buff.

fscanf(fp, conversion_specifiers, vars) Reads characters from the file pointed to by fp and assigns input to a list of variable pointers vars using conversion_specifiers. As with scanf, fscanf stops reading a string when a space or newline is encountered.

The gets() function reads up until the newline. fscanf() reads data according to conversion specifiers. And then the while loop reads one character at a time until the end of file. Checking for a problem when opening the file (a NULL pointer) was left out to shorten the example.

The stdio.h library also includes functions for writing to a file. When writing to a file, newline characters '\n' must be explicitly added.

fputc(char, fp) Writes character char to the file pointed to by fp.

fputs(str, fp) Writes string str to the file pointed to by fp.

fprintf(fp, str, vars) Prints string str to the file pointed to by fp. str can optionally include format specifiers and a list of variables vars.


*/

#include <stdio.h> 

int main() { 
    FILE *fptr; 
    int stock; 
    char buffer[200], item[10], c; 
    float price; 
    
    /* myfile.txt: Inventory\n100 Widget 0.29\nEnd of List */ 
    fptr = fopen("myfile.txt", "w"); /* write to file */ 
    fprintf(fptr, "Inventory\n"); 
    fprintf(fptr, "%d %s %f\n", 100, "Widget", 0.29); 
    fputs("End of List", fptr); 
    fclose(fptr); 
    
    
    /* myfile.txt: Inventory\n100 Widget 0.29\nEnd of List */ 
    fptr = fopen("myfile.txt", "r"); 
    if (fptr == NULL){
        printf("Error opening file");
        return -1;
    }
    fgets(buffer, 20, fptr); /* read a line */ 
    printf("%s\n", buffer); 
    fscanf(fptr, "%d%s%f", &stock, item, &price); /* read data */ 
    printf("%d %s %4.2f\n", stock, item, price); 
    while ((c = fgetc(fptr)) != EOF) /* read the rest of the file */ 
    printf("%c", c); 
    fclose(fptr); 
    return 0;
}
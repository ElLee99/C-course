/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/*Binary File I/O


Writing only characters and strings to a file can become tedious when you have an array or structure. To write entire blocks of memory to a file, there are the following binary functions:

Binary file mode options for the fopen() function are:
- rb open for reading (file must exist)
- wb open for writing (file need not exist)
- ab open for append (file need not exist)
- rb+ open for reading and writing from beginning
- wb+ open for reading and writing, overwriting file
- ab+ open for reading and writing, appending to file

fwrite(ptr, item_size, num_items, fp) Writes num_items items of item_size size from pointer ptr to the file pointed to by file pointer fp.

fread(ptr, item_size, num_items, fp) Reads num_items items of item_size size from the file pointed to by file pointer fp into memory pointed to by ptr.

fclose(fp) Closes file opened with file fp, returning 0 if close was successful. EOF is returned if there is an error in closing
*/


#include <stdio.h>

int main()
{
    FILE *fptr;
    int arr[10];
    int x[10];

    
    //generate array of numbers
    for (int k = 0; k < 10; k++)
        arr[k] = k;
    
    //write array to FILE
    fptr = fopen("datafile.bin", "wb");
    fwrite(arr, sizeof(arr[0]),
           sizeof(arr)/sizeof(arr[0]), fptr);
    fclose(fptr);
    
    //read array from FILE
    fptr = fopen("datafile.bin", "rb");
    fread(x, sizeof(arr[0]),
           sizeof(arr)/sizeof(arr[0]), fptr);
    fclose(fptr);
    
    //print array
    for (int k = 0; k < 10; k++)
        printf("%d", x[k]);
        
    



          
    
    
    return 0;
}

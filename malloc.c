#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
The functions malloc() and calloc() are library functions that allocate memory dynamically.
 Dynamic means the memory is allocated during runtime (execution of the program) from the 
 heap segment.
Initialization
malloc() allocates a memory block of given size (in bytes) and returns a pointer to the
 beginning of the block. malloc() doesn’t initialize the allocated memory. If you try 
 to read from the allocated memory without first initializing it, then you will invoke 
 undefined behavior, which will usually mean the values you read will be garbage.
calloc() allocates the memory and also initializes every byte in the allocated memory 
to 0. If you try to read the value of the allocated memory without initializing it, 
you’ll get 0 as it has already been initialized to 0 by calloc().
*/
void main()
{
    char *mem_alloc;
    //memory allocated dynamically
    mem_alloc = malloc( 15 * sizeof(char) );

    if(mem_alloc== NULL )
    {
        printf("Couldn't able to allocate requested memory\n");
    }
    else
    {
        strcpy( mem_alloc,"w3schools.in");
    }

    printf("Dynamically allocated memory content : %s\n", mem_alloc );
    free(mem_alloc);
}
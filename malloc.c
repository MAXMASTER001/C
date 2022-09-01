#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
Why use malloc() ?
Here are the reasons of using malloc()

You should use malloc() when you have to allocate memory at runtime.
You should use malloc when you have to allocate objects which must exist beyond the execution of the current memory block.
Go for malloc() if you need to allocate memory greater than the size of that stack.
It returns the pointer to the first byte of allocated space.
It enables developers to allocate memory as it is needed in the exact amount.
This function allocates a memory block size of bytes from the heap.
Why use calloc() ?
Here are the reasons of using calloc()

When you have to set allocated memory to zero.
You can use calloc that returns a pointer to get access to memory heap.
Used when you need to initialize the elements to zero to returns a pointer to the memory.
To prevent overflow that is possible with malloc()
Use calloc() to request a page that is known to already be zeroed.
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
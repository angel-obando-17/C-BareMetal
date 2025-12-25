#include <stdio.h>

int main( void ) {
    int i = 10;
    printf( "The value of i is = %d\n", i );
    /* We use the & operator to obtain the address of a variable,
       %p prints a pointer, the pointer is normally in hexadecimal format,
       this number is the address into memory where the data is stored. */
    printf( "The address in memory of i is = %p\n", (void*)&i );
    return 0;
} 
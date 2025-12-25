#include <stdio.h>

int main( void ) {
    /* A string in C is really a char-array, we have
       two options. */
    /* Using a pointer, where s point to the first character
       of the string. */
    char* s = "Hello World!";

    /* Using an array with undefined size. */
    char c[ ] = "Hello World!";

    printf( "%s\n", s );
    printf( "%s\n", c );
    return 0;
} 
#include <stdio.h>
#include <string.h>

int main( void ) {
    /* If we want to know the size of a string in C, we need
       to use a string.h library, this library has the 
       function strlen( ) wich returns the size of the string. */

    char* s = "Hello World!";
    printf( "The size of the %s string is: %zu bytes\n", s, strlen( s ) );
    return 0;
}
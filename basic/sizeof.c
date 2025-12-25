#include <stdio.h>

int main( void ) {
    int a = 999;
    float b = 3.14;
    char c = 'c';
    /* sizeof is a function that return the size in bytes of the type expression,
       not the size of the expression itself, %zu is the format identifier to 
       size_t type. */
    printf( "%zu\n", sizeof( a ) );
    printf( "%zu\n", sizeof( b ) );
    printf( "%zu\n", sizeof( c ) );
    return 0;
}
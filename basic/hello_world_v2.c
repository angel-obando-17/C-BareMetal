#include <stdio.h>

int main( void ) {
    /* Integer type. */
    int i = 2;
    /* Float type. */
    float f = 3.14;
    /* Char type [ char pointer ] is the string type */
    char* s = "Hello World!";

    printf( "%s, i = %d, and f = %.2f!\n", s, i, f );
    return 0;
}
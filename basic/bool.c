#include <stdio.h>

/* Standard Library to booleans types. */
#include <stdbool.h>

int main( void ) {
    bool x = true;
    bool y = false;
    if( x && !y ) {
        printf( "x is true and y is false!\n" );
    }
    return 0;
}

/* In C really 0 is false and any non-zero number is true, in C23 isn't
   neccesary "stdbool.h". */
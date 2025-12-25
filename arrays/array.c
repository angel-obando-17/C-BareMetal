#include <stdio.h>

int main( void ) {
    /* Declare an array of 4 elements of type float. */
    float f[ 4 ];

    /* Indexs starts in 0, we use the index to acces to each 
       position of the array. */
    f[ 0 ] = 1.1;
    f[ 1 ] = 1.2;
    f[ 2 ] = 1.3;
    f[ 3 ] = 1.4;

    for( int i = 0; i < 4; i++ ) {
        printf( "%.2f\n", f[ i ] );
    }

    return 0;
} 
#include <stdio.h>

void increment( int* p ) {
    *p = *p + 1;
}

int main( void ) {
    int i = 10;
    int* j = &i;

    increment( j );

    printf( "i is %d\n", i );
    return 0;
}
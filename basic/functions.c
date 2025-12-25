#include <stdio.h>

/* This is a function declaration, you need the type of the function
   going to return, the parameters with the type of the parameter, then
   into the brackets the action. */
int plus_one( int n ) {
    return n + 1;
}

int main( void ) {
    int i = 10, j;
    /* We call the function, where the parameter is i and the result is
       saved in j. */
    j = plus_one( i );
    printf( "i + 1 is %d\n", j );
    return 0;
}
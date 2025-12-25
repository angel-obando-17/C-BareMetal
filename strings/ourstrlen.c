#include <stdio.h>


/* In C strings always have a zero-valued byte somewhere 
    in memory after the pointer that indicates the end
    of the string ( \0 ), so with this in mind, we can 
    write our own strlen( ) function. */
int my_strlen( char* s ) {
    int count = 0;
    while( s[ count ] != '\0' ) {
        count++;
    }

    return count;
}

int main( void ) {
    /* Behind the scenes the string is "Hello again\0". */
    char* s = "Hello again";
    printf( "The size of the %s string is %d\n", s, my_strlen( s ) );
    return 0;
}
#include <stdio.h>

int main( void ) {
    /* i is an int type expression. */
    int i;
    /* p is a pointer to an int, or int-pointer. */
    int* p;

    /* We assign to i the value of 10. */
    i = 10;
    /* We assign to p the address of i. */
    p = &i;

    /* The thing to p points ( which is i ) now has the value of 20. */
    *p = 20;

    printf( "i is %d\n", i );
    printf( "i is %d\n", *p );
    return 0;
}
#include <stdio.h>

int main( void ) {
    int x = 15;
    int y = 0;
    
    /* This expression is a conditional embedded. 
       Equivalent to If( x > 10 ), add 17 to y. Otherwise add 37 to y.*/
    y += x > 10 ? 17 : 37;

    printf( "The value of y is %d\n", y );

    /* Other wa to use ternary operators is on printf function. 
       In this case we use the ternary operator to evaluate if x is odd or even. */
    printf( "The number %d is %s\n", x, x % 2 == 0 ? "even" : "odd" );

    return 0;
}
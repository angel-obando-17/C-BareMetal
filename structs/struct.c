#include <stdio.h>

/* Struct Declaration. */
struct car {
    char* name;
    float price;
    int speed;
};

void set_price( struct car* c, float price ) {
    /* We use the arrow opertor to acces a characteristic of a pointer to struct.  */
    c -> price = price;
}

int main( void ) {
    /* We can initialize characteristics of a struct of this way. */
    struct car Saturn = { .speed = 175, .name = "Saturn S/L2" };
    set_price( &Saturn, 799.99 );
    /* We use the dot operator to acces a characteristic of a struct. */
    printf( "Price: %.2f\n", Saturn.price );
    return 0;
}

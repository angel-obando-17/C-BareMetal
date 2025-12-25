#include <stdio.h>

int main( void ) {
    FILE* fp = fopen( "whales.txt", "r" );

    char text[ 1024 ];
    float lenght;
    int mass;

    /* We use fscanf( ) function to format correctly the input of the file. */
    while( fscanf( fp, "%s %f %d", text, &lenght, &mass ) != EOF ) {
        printf( "%s whale, %d tonnes, %.1f meters\n", text, mass, lenght );
    }

    fclose( fp );
    return 0;
}
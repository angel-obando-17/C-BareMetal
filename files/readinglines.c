#include <stdio.h>

int main( void ) {
    FILE* fp = fopen( "quote.txt", "r" );
    /* Big enought for any line this program will encounter. */
    char line[ 1024 ];
    int linecount = 0;

    while( fgets( line, sizeof( line ), fp ) != NULL ) {
        printf( "%d: %s\n", ++linecount, line );
    }

    fclose( fp );
    return 0;
}
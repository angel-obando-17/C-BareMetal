#include <stdio.h>

int main( void ) {
    /* We need to use a FILE* type, then we use fopen to open a file and we can specify 
       only for reading with "r". */
    FILE* fp = fopen( "hello.txt", "r" );

    /* We can read a single character of the file. */
    int c = fgetc( fp );   
    printf( "%c\n", c );

    int text;
    /* Notice that fgetc( ) function save the position of the next
       character in the file, so when we do this, starts in the second character
       of the file. */
    while( ( text = fgetc( fp ) ) != EOF ) {
        printf( "%c", text );
    }
    printf( "\n" );

    /* Close the file when done. */
    fclose( fp );
    return 0;
}
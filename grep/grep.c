#include<stdio.h>
#include<string.h>

#define BUFFER_LENGTH 511

int main( int ac, char * av[] )
{
    char lineBuffer[BUFFER_LENGTH+1];
    FILE *fp = NULL;
    int count = 0;

    if( ac < 3 )
    {
        fprintf( stderr, "A string pattern and a file name are required\n" );
        return 1;
    }

    fp = fopen( av[2], "r" );
    if( ! fp )
    {
        fprintf( stderr, "Error - unable to open %s\n", av[2] );
        return 2;
    }

    while( fgets( lineBuffer, BUFFER_LENGTH, fp ) )
    {
        if( strstr( lineBuffer, av[1] ) )
        {
            printf( "%s", lineBuffer );
            ++count;
        }
    }
    fclose( fp );
    printf( "found %d occurrences\n", count );
    return 0;
}

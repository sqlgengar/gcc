#include <stdio.h>
#include <stdlib.h>

int is_odd(int);

int main(){

    int input_number;
    
    printf( "enter a number: \n" );

    scanf( " %i", &input_number );
    fflush(stdin);

    if ( is_odd( input_number ) != 1 ){

        printf( "the value in not odd \n" );
        exit(0);

    }

    printf( "the value is odd \n" );

    return 0;

}

int is_odd( int value_number ){

    if ( ( value_number % 2 ) != 0 ){

        return 0;

    }

    return 1;

}
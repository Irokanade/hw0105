//
//  hw0105.c
//  hw0105
//
//  Created by Michael Leong on 2021/3/6.
//

#include <stdio.h>
#include "mystring.h"
#include <string.h>

int main() {
    
    const char  *str = "I have an apple.";

    int c = 'a';

    printf( "str: \"%s\"\n", str );
    printf( "strchr( str, c ) = %s\n", mystrchr( str, c ) );
    printf( "location is %d\n", mystrchr( str, c ) - str );
    printf( "strrchr( str, c ) = %s\n", mystrrchr( str, c ) );
    printf( "location is %d\n", mystrrchr( str, c ) - str );
    
    

    return 0;
}

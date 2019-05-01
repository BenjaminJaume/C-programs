/*
 ============================================================================
 Name        : first.c
 Author      : Benjamin Jaume
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main () {
    char c;

    while ((c=getchar ())!= EOF) {
        if ( c>='A' && c<='Z')
            c=c-'A'+'a' ;
        putchar(c);
    }
return 0;
}

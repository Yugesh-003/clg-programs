//alphabet.c
//to print the alphabet using loops and ascii value
#include <stdio.h>

int main()
 {
    char letter;

    printf("Alphabet:\n");
    for(letter=97;letter<=122;letter++)
    { 
        printf("%c ",letter);
    }
    return 0;
}

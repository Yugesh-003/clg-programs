#include<stdio.h>
#include<string.h>
void main(){

    char a[10];

    printf("Before  : ");
    scanf("%s",a);

    printf("After  : ");

    //if we use the strlen() in the condition dirrectly we actually calling a same function again again for no reason
    for (int i = 0,length = strlen(a); i < length; i++){
        if (a[i] >= 'a' && a[i] <= 'z')
            //in ASCII values the difference between lowercase letters and uppercase letters is 32
            printf("%c",a[i] - 32);
        else
            printf("%c",a[i]);
    }
    //if wanted to change all the given char to lowercase letters chang the letters in if condition and add 32 to the actual ascii value
    
    //yeah u can use ctype.h header file and toupper and tolower functions
}
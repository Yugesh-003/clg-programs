#include<stdio.h>
int main(){
    int rev, x, rem, count= 0;
    printf("Enter  a number : ");
    scanf("%d",&x);

    int og_x = x;

    while(x!=0) 
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }

    if (rev == og_x)
        printf("The given number is palindrome");
    else
        printf("The given number is not a palindrome");
    return 0;
}
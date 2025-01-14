#include<stdio.h>
int main()
{
    unsigned long long int fact;
    int number,i;
    fact=1;
    i=1;
    printf("**FACTORIAL CALCULATION**");
    a:printf("\nEnter a positive number:");
    scanf("%d",&number);
    if(number<0)
    {
        printf("INVALID NUMBER");
        goto a;
    }
    else
    {
        while(i<=number)
        {
            fact*=i;
            i++;
        }
    }
    printf("The factorial of %d is %llu",number,fact);
    return 0;
}
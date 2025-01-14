//fact.c
//to accept numbers from the user till user say no and find factorial of the given numbers
#include<stdio.h>
int main()
{
    int num,fact;
    int i;
    char ch;
    do
    {
        printf("Enter a number:");
        scanf("%d",&num);
        i=1;
        fact=1;
        while(i<=num)
        {
            fact*=i;
            i++;
        }
        printf("The factorial is %d",fact);
        printf("\nDo you want to continue(Y/N):");
        scanf(" %c",&ch);
    } while (ch=='y'||ch=='Y');
    return 0;
    
}
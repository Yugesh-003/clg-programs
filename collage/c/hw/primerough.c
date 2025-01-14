//primecheck.c
//to check whether the given number is prime or not
#include<stdio.h>
int main()
{
    int num,no,check,i;


    
    check=0;
    printf("**PRIME CHECK**");
    printf("\nEnter a number :");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        no=num%i;
        if    (no==0)
        {
            check++;
            break   ;
        }
    }
    if(check>0)
      printf("COMPOSITE");
    else
      printf("PRIME");
}
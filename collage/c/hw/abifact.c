#include<stdio.h>
int main()
{
    int no,fact,i=1;
    char ch;
    do
    {
    fact=1;
    printf ("Enter a number:");
    scanf("%d",&no);
    for(i=1;i<=no; i++)
    {
        fact*=i;
    }
    printf("The Facturial is %d",fact);
    printf("Do year want to continue(Y/N)");
    scanf(" %c",&ch);
    }while (ch=='y'||ch=='Y');

}

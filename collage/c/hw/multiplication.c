//multiplication.c
//to print the multiplication table for the number
#include<stdio.h>
int main()
{
    int i,no,limit;
    printf("**MULTIPLICATION TABLE**");
    printf("\nEnter the table you want:");
    scanf("%d",&no);
    printf("Enter the length of the table:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
      
       printf("%d*%d=%d\n",i,no,i*no);

    }

}

//to swap numbers 
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter n1:");
    scanf("%d",&n1);
    printf("Enter n2:");
    scanf("%d",&n2);

    n1 = n1 + n2; 
    n2 = n1 - n2; 
    n1 = n1 - n2; 
    printf("After Swap");
    printf("\nValue of n1:%d\n",n1);
    printf("Value of n2:%d",n2);
}
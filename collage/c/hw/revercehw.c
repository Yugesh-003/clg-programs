//reverse.c
//to printf the given numbers in reverse order
#include<stdio.h>

int main()
{
    int n,i,reverse=0,rem,count=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
   /* while (n%10==0)
    {
        count++;
        n/=10;
    }   */
    while(n!=0) 
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    printf("Reversed numbers : ");
    for (i=0;i<count; i++) 
    {
        printf("0");
    }
    printf("%d",reverse);
    return 0;

}
  
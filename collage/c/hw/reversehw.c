#include<stdio.h>

int main()
{
    int num,n,i,reverse=0,rem,count=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    n=num;
    while(n!=0) 
    { 
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
        count++;
    }
    printf("The reveresed number is:");
    for (i=0;i<count-1; i++) 
    {
        printf("0");
    }
    printf("%d",reverse);
    return 0;

}
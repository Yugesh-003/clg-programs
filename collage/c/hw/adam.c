//to find that the given number is adam number or not
#include<stdio.h>
int main()
{
    int num,n,revsqr=0,rev=0,a,sq1,sq2;

    printf("Enter a number: ");
    scanf("%d",&num);

    n=num;
    sq1 = num * num;
    while (num >0)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    
    sq2 = rev * rev;

    while (num>0)
    {
        revsqr = revsqr * 10 + a%10;
        a/=10;
    }

    if (sq1 == revsqr)
       printf("%d is an adam number",n);
    else
       printf("%d is not an adam number.",n);
    

    return 0;

     
}
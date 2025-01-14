#include <stdio.h>
int main()
{
    int num,n,i,reverse=0,rem,count=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    num = n;
    if (n==0) 
    {
        count=1;
    } 
    else
    {
        while (n%10==0)
        {
            count++;
            n/=10;
        }
    }    
    while(n!=0) 
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }

    for (i=0;i<count; i++) 
    {
        printf("0");
    }
    if (num == reverse)
        printf("True");
    
    return 0;

}
  
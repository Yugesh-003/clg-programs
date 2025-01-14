//to print the fibonacci series upto 50
#include<stdio.h>
int main()
{
    int n,no=-1,j=1;
    while (no<50)
    {
        n=no+j;
        if(n>50)
         break;
        printf("%d ",n);
        no=j;
        j=n;

    }
}
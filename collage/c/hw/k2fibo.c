#include<stdio.h>
int main()
{
    int n,no = 0,j=1;
    printf("Fibonacci numebers\n");
    printf("%d\t%d\t",no,j);
    while (no < 50)
    {
        n = no +j;
        if(n > 50)
          break;
        printf("%d\t",n);
        no = j;
        j = n;
    }
    return 0;
}
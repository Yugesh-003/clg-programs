#include<stdio.h>
int main()
{
    int n,num,no,i=0,j=1;
    printf("FIBONACI SERIES\n");
    printf("Enter how many number you want:");
    scanf("%d",&num);
    for( ; n < num; n = no + j)
    {
        printf("%d\t",n);
        no = j;
        j = n;
    }
    return 0;
}
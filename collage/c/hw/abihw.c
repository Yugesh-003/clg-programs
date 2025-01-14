#include<stdio.h>
int main()
{
    int no,check, num, i;

    printf("Enter a number:\n");
    scanf("%d",&no);
    i=2;
    check=0;
    while(i<=no-1)
    {
    num=no%i;
    if (num==0)
    {
        check++;
    }
    i++;
    }
    if (check>0)
     printf ("COMPOSITE");
    else
     printf ("PRIME");
    return 0;
}

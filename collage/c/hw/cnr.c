#include<stdio.h>

int long_factorial(int no,int r) 
{
    int i;
    int fact = 1;
    if (r==0)
      i = 1;
    else 
      i = no - r;
    while (i<=no)
    {
        fact *= i;
        i++;
    }
    return fact;
}
int main() 
{
    int n, r,ans;
    printf("Enter the total number of items : ");
    scanf("%d", &n);
    a:printf("Enter the number of items to be picked : ");
    scanf("%d", &r);

    if (r > n) 
    {
        printf("The number of items to be picked cannot be greater than the total number of items.\n");
        goto a;
    }
    ans = long_factorial(n,r-1) / long_factorial(r,0);

    printf("The number of ways the items can be picked : %d\n", ans);
    return 0;
}

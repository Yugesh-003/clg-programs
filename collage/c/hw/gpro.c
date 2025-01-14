#include <stdio.h>
unsigned long long int long_factorial(int no, int r)
{
    int i;
    unsigned long long fact = 1;
    for (i = no-(r-1); i <= no; i++)
    {
        fact *= i;
    }
    return fact;
}
int factorial(int no)
{
    int i,fact = 1;
    for (i = 1; i <= no; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n,r;
    unsigned long long ans;
    printf("Enter the total number of items: ");
    scanf("%d", &n);
    a:printf("Enter the number of items to be picked: ");
    scanf("%d", &r);
    if (r > n) 
    {
        printf("The number of items to be picked cannot be greater than the total number of items.\n");
        goto a;
    }

    ans = long_factorial(n,r) /factorial (r);
    printf("The probability of the items picked: %llu\n", ans);
    return 0;
}
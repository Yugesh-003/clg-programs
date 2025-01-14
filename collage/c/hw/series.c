#include<stdio.h>
int main()
{
    float sum,factorial=1.0;

    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);


    for (i=1;i<=n;i++) 
    {
        factorial *= i;  
        sum += 1.0 / factorial; 
    }
    printf("The sum of the series is %.2f",sum);

}
//sum of n numbers

#include<stdio.h>
void main()
{
    int i,n,num[100],total = 0;
    printf("Enter how many numbers : ");
    scanf("%d",&n);
    
    printf("Enter the numbers : \n");
    for (i = 0 ; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i = 0; i< n; i++)
    {
        total += num[i];
    }
    printf("The total of given number is %d",total);

}
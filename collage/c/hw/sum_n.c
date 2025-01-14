//sum of n numbers
//max of n numbers
//min of n numbers
#include<stdio.h>
void main()
{
    int i,n,num,min,total = 0,max;
    printf("Enter how many numbers : ");
    scanf("%d",&n);
    
    printf("Enter the numbers : ");
    for (i = 0 ; i < n ; i++)
    {
        scanf("%d",&num);

        if (i == 0) 
        {
            min = max = num;
        }

        //to find total
        total += num;

        //to find max
        if (num > max)
            max = num;

        //to find min
        if (num < min)
            min = num;
    }
    printf("The total of given number is %d",total);
    printf("\nThe max of given number is %d",max);
    printf("\nThe min of given number is %d",min);

}
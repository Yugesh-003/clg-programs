//min of n numbers
#include<stdio.h>
void main()
{
    int i,n,num[100],min;

    printf("Enter how many numbers : ");
    scanf("%d",&n);
    
    printf("Enter the numbers : \n");
    for (i = 0 ; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i = 0 ; i < n ; i++)
    {
        if (i == 0)
            min = num[i];

        //to find min
        if (num[i] < min)
            min = num[i];
    }
    printf("\nThe minimum of given number is %d",min);

}
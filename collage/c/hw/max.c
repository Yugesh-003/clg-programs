//to find the maximum number of the given n numbers
#include<stdio.h>
int main()
{
    int i,j,no[100],max_no=1,max,num,check;

    printf("Enter how many numbers you want to check : ");
    scanf("%d",&num);

    for (i = 0 ; i<=num-1 ; i++)
    {
        printf("Enter a number:");
        scanf("%d", &no[i]);
    }
    for (i = 0 ; i<=num-1; i++)
    {   
        check=0;
        for (j=0; j<=num-1; j++)
        {
            if (no[i]<no[j])
             check++;
        }
        if (check>max_no)
        {
            max_no=check;
            max=no[i];
        }
    }
    printf("The maximum of the given numbers is %d",max);
    return 0;

}
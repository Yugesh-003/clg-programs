//to sort the given numbers
#include<stdio.h>
int main()
{
    int n, no[100], i, j, t;

    printf("Enter how many number you want : ");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d",&no[i]);
    }
    
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (no[i] > no[j])
            {
                t = no[i];
                no[i] = no[j];
                no[j] = t;
            }
        }
    }
    printf("The sorted array is ");
    for (j=0; j<n; j++)
    {
        printf("%d\n",no[j]);
    }
}
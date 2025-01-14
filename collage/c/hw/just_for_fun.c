#include<stdio.h>

void main() {
    int n,target;

    printf("How many numbers? ");
    scanf("%d",&n);

    int num[n];

    printf("Enter the numbers : \n");
    for (int i = 0 ; i < n; i++)
    {
        scanf("%d",&num[i]);
    }

    printf("Target value : ");
    scanf("%d",&target);

    for(int i = 0 ; i < n; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            if(num[i] + num[j] == target)
                printf("%d,%d",i,j);
        }
    }
}
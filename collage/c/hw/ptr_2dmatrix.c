#include<stdio.h>
#include<stdlib.h>
void main(){
    int n, **ptr; 
    printf("How many numbers :");
    scanf("%d",&n);

    ptr = (int **)malloc(n * sizeof(int));

    printf("Enter the numbers :\n");
    for ( int i = 0; i < n; i++)
    {
        ptr[i] = (int *)malloc(10000 * sizeof(int));
        scanf("%d",&ptr[i]);
    }
    printf("The numbers are...\n");
    for ( int i = 0 ; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }
}
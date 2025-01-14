//sort names with pointers
#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,i;
    char **ptr;
    printf("How many names ? ");
    scanf("%d",&n);

    ptr = (char **)malloc(n * sizeof(char *));

    printf("Enter the names : \n");
    for (i = 0; i < n; i++)
    {
        ptr[i] = (char *)malloc(40 * sizeof(char));
        scanf("%s",ptr[i]);
    }

    printf("\nThe entered names \n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n",ptr[i]);
    }
}
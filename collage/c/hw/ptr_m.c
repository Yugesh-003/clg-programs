#include<stdio.h>
#include<stdlib.h>
void main(){
    int **num;
    int i,j,r1,c1;

    a:printf("Enter rows and columns of first matrix : ");
    scanf("%d %d",&r1,&c1);
    
    num = (int **)malloc(r1 * sizeof(int));

    printf("Enter elements \n");
    for (i = 0; i < r1; ++i)
    {
        num[i] = (int *)malloc(c1 * sizeof(int *));
        for (j = 0; j < c1; ++j)
        {
            scanf("%d", &num[i]);
        }
    }

    printf("The matrix : \n");
     for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d  ", num[i]);
        }
        printf("\n");
    }

}
#include<stdio.h>
#include<stdlib.h>
void main(){
    int **m1,**m2;
    int r1,r2,c1,c2;

    a:printf("Enter rows and columns of first matrix : ");
    scanf("%d %d",&r1,&c1);
    
    printf("Enter rows and columns of second matrix : ");
    scanf("%d %d",&r2,&c2);

    if (c1 != r2){
        printf("Matrix multiplication is not possible.\n");
        goto a;
    }

    m1 = (int **)malloc(r1 * sizeof(int));
    m2 = (int **)malloc(r2 * sizeof(int));


    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; ++i)
    {
        m1[i] = (int *)malloc(c1 * sizeof(int *));
        for (j = 0; j < c1; ++j)
        {
            scanf("%d", &m1[i]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; ++i)
    {
        m2[i] = (int *)malloc(c2 * sizeof(int));
        for (j = 0; j < c2; ++j)
        {
            scanf("%d", &m2[i]);
        }
    }
    for (i = 0; i < r1; i++){
        for (j = 0; j < c2; j++){
            ans[i][j] = 0;
            for (k = 0; k < c1; k++){
                ans[i][j] += matrix1[i][j] * matrix2[i][j];
            }
        }
    }
    printf("The resultant matrix : \n");
     for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

}
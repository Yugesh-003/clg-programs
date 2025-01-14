//matrix multiplication 
#include<stdio.h>

void main()
{
    int r1,c1,r2,c2,i,j,k;

    int matrix1[100][100], matrix2[100][100], ans[100][100];

    a:printf("Enter rows and columns of first matrix : ");
    scanf("%d %d",&r1,&c1);
    
    printf("Enter rows and columns of second matrix : ");
    scanf("%d %d",&r2,&c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.\n");
        goto a;
    }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c1; ++j)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            ans[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                ans[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("The resultant matrix : \n");
     for (i = 0; i < r1; i++) 
     {
        for (j = 0; j < c2; j++) 
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

}
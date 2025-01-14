#include<stdio.h>
int main()
{
    int sum,i,no,num[100];
    float avg;
    printf("Enter how many numbers you want to calculate:");
    scanf("%d",&no);
    sum = 0;
    for (i = 0; i < no; i ++)
    {
        printf("Enter a number :");
        scanf("%d",num[i]);
        sum += num[i];
    }
    avg = sum / no;
    printf("The average is %f",avg);

}
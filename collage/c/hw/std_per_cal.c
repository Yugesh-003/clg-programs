//student percentage calculation
#include<stdio.h>
#include<stdlib.h>
typedef struct details
{
    int rno,mark[5],total,age;
    char name[40];
    float avg;
}details;

void main()
{
    int i;
    details std;

    std.total = 0;

    printf("\tSTUDENT DETAILS\n");

    printf("Enter your name : ");
    scanf("%s",std.name);

    printf("Enter your roll number : ");
    scanf("%d",&std.rno);

    printf("Enter your 5 subject marks : \n");
    for (i = 0 ; i < 5 ; i++ )
    {
        scanf("%d",&std.mark[i]);
        std.total += std.mark[i];
    }

    std.avg = std.total / 5.0;

    printf("STUDENT DETAILS \n");
    printf("Name : %s\n",std.name);
    printf("Roll number : %d\n",std.rno);
    printf("Total : %d\n",std.total);
    printf("Average : %.2f\n",std.avg);

}

#include<stdio.h>
void main()
{
    char a[100];
    int no;
    printf("Input : ");
    scanf("%d",&no);
    a[0] = no;
    printf("%c",a[0]);
}
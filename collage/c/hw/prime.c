//to print the prime nos within the given range
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int up,low,i,j,no,check;
    system("cls");
    // a:printf("Enter the low limit:");
    // scanf("%d",&low);
    printf("Enter the up limit:");
    scanf("%d",&up);
    // if (low>up)
    // {
    //     printf("INVALID INPUT");
    //     goto a;
    // }
 
    for(i=2;i<=up;i++)  
    {
        check=0; 
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                check++; 
                break;
            }
        }
        if(check==0) 
        {
            printf("%d ",i);
        }
    }

}    
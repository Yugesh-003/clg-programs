#include <stdio.h> 
int main() 
{ 
    int i,j,upper,low;
    printf("Enter the low limit:");
    scanf("%d",&low);
    printf("Enter the upper limt")
    scanf("%d",&upper);
    printf("Prime numbers between %d and %d are:",low,upper);
    for(i=upper;i<=low;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
           printf("%d\n",i);
    }
   
    return 0;
}
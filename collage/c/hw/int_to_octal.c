#include<stdio.h>
int main()
{
    typedef struct remainder 
    {
        float remainder;
    }rem;
    
    int num,i;
    rem r;
    printf("INTEGER TO OCTAL CONVERSION");
    printf("\nEnter a integer:");
    scanf("%d",&num);
   
    for(i=0;num>0;i++){
        r.remainder=num%8;
        num/=8;
    }
  
    printf("The octal eqauivalent is ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",r.remainder);
      
    }

}

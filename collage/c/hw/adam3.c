#include<stdio.h>
int main()
{
    int rev=0,num,no,o_no,sqr,revsqr=0,temp;
    printf("no");
    scanf("%d",&no);
    o_no = no;
    sqr = no * no;
    for(  ; no >0; no /=10)
    {
        rev = rev * 10 + no % 10;
    }
    
    temp = rev * rev;
    printf("%d\n",sqr);
    printf("%d\n",temp);
    for ( ; temp > 0; temp /=10)
    {
        revsqr = revsqr * 10 + temp % 10;
    }
    
    
    if (sqr == revsqr)
    printf ("Adam");
    else
    printf("Not adam");
    
}
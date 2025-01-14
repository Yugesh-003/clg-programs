//to print the mode of the given n numbers
#include<stdio.h>
int main()
{
    int i,j,count,maxcount,data[100],no,answer;
    maxcount=0;
    answer=0;
    int check=0;

    printf("*Program to find mode of gn data*\n");

    printf("Enter how numbers you want to calculate:");
    scanf("%d",&no);
    //to accept the data
    for (i = 0; i<=no-1; i++ )
    {
        printf("Enter a number : ");
        scanf("%d",&data[i]);
    }
    for(i =0; i<=no; i++)
    {
        count=0;  
        //to compare each number with every numbers
        for (j=0;j<=no;j++)
        {
            if(data[j]==data[i])
                count++;
        }

        if(count>maxcount)
        {
            maxcount=count;
            answer=data[i];
            check++;
        }
      
    }
    if (maxcount ==1)
        printf("No mode");
    else 
        printf("Mode : %d",answer);
    //still have to do code for multiple code
}

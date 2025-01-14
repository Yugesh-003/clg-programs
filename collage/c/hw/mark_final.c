#include <stdio.h>
#include<stdlib.h>
#include"percentage.h"
#include"details.h"
#include"subjects.h"
int main()
{
    details d;
    det(d);
    d.total = 0.0;
    for(int i=0; i<8; i++)
    { 
        printf("\nEnter the marks for %s\n", d.subjects[i]);
        if(i<6)
        {
           printf("Viva mark: ");
           scanf("%d", &d.viva[i]);
        }
        printf("Exam mark: ");
        scanf("%d", &d.exam[i]);

        printf("Attendance percentage: ");
        scanf("%d", &d.aper[i]);

        printf("Assignment mark: ");
        scanf("%d", &d.assignmentmark[i]);

        printf("I internal mark: ");
        scanf("%f", &d.internal1[i]);

        printf("II internal: ");
        scanf("%f", &d.internal2[i]);
               
        if (i<6)
        {
            d.amark[i]=att_percent(d.aper[i],5,0.5);  
            d.internal[i] = (d.internal1[i] + d.internal2[i]) / 6.66666;
            d.theory[i] = (d.viva[i] + d.exam[i]) / 1.333333;
        }
        else
        {
            d.amark[i]=att_percent(d.aper[i],10,1);
            d.internal[i] = (d.internal1[i] + d.internal2[i]) / 5.0;
        }
        if(i<6)
        {
            d.stotal[i] = d.internal[i] + d.amark[i] + d.assignmentmark[i] + d.theory[i];
        }    
        else
        {
            d.stotal[i] = d.internal[i] + d.amark[i] + d.assignmentmark[i] + d.exam[i]; 
        }
        d.total += d.stotal[i];   
    }      
    printf("Marks");
    for (int i=0; i<8; i++)
    {
        if (i<6)
          printf("%s-%.2f\n",d.subjects[i],d.stotal[i]);
        else
          printf("%s-%.2f\n",d.subjects[i],d.stotal[i]);
    }
    printf("The total mark is %.2f\n", d.total);

    return 0;
}

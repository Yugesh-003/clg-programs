//marks_calculation.c
//to calculate the marks a student have scored
#include <stdio.h>
int main()
{
    int aper[8],theory[8],internal[8],amark[8];
    int total=0;
    char subjects[8][20]={"English","Tamil","C-Lab","Excel-Lab","Maths","DPCO","Value Education","P.E",};
    printf("Enter the theory marks for 5 subjects:\n");
    int i;
    for (int i=0;i<=7;i++)
    {
	printf(subjects[i]);
	scanf("%d", &theory[i]);
    }
    
    printf("Enter your attendance percentage:");

    for(i=0;i<=7;i++)
    {
	printf(subjects[i]);
	scanf("%d",&aper[i]);
    }

    
    if (aper > 95)
        amark = 5;
    else if (aper > 90)
        amark = 4.5;
    else if (aper > 85)
        amark = 4;
    else if (aper > 80)
        amark = 3.5;
    else if (aper > 75)
        amark = 3;
    else if (aper > 70)
        amark = 2.5;
    else if (aper > 65)
        amark = 2;
    else if (aper > 60)
        amark = 1.5;
    else if (aper > 55)
        amark = 1;
    else if (aper > 50)
        amark = 0.5;
    else
        amark = 0;
    
    
    printf("Enter your assignment mark:");
    for(i=0;i<=7;i++)
    printf(subjects[i]);
	scanf("%d",&amark[i]);{
	
    }
    printf("Enter the first internal marks for 5 subjects:\n");

    for (i=0;i<=7;i++)
    {
	printf(subjects[i]);
	scanf("%d", &internal[i]);
    }
    

    for (i = 0; i < 5; i++)
    {
	total += theory[i] + internal[i];
    }

    printf("The total mark is: %d\n", total);

    return 0;
}

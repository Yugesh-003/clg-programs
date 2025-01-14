// Online C compiler to run C program //student.c
//to canculate the student total marks(including attendence),average mark,percentage
#include<stdio.h>
#include<conio.h>
int main()

{
    int id,m1,m2,m3,m4,m5,i,j;
    char grade,name[25];
    float aper,amark,total,avg;
    
    printf("STUDENTS MARK CALCULATION");
    printf("\nEnter your student id:");
    scanf("%d",&id);
    printf("\nEnter your name:");
    scanf("%s",name);

    printf("\nEnter your marks.\n");
    printf("TAMIL\t");
    scanf("%d",&m1);
    printf("ENGLISH ");
    scanf("%d",&m2);
    printf("SCIENCE ");
    scanf("%d",&m3);
    printf("MATHS   ");
    scanf("%d",&m4);
    printf("SOCIAL  ");
    scanf("%d",&m5);
    
    a:printf("\nEnter your attendance percentage :");
    scanf("%f",&aper);
    
    if (aper>100)
    {
      printf("INVALID INPUT");
      goto a;
    }
    else if (aper>75)
      amark=5;
    else if (aper>65)
      amark=3;
    else if (aper>50)
      amark=1;
    else
      amark=0;

    total=m1+m2+m3+m4+m5+amark;
    avg=total/6;

    if (avg>=90)
      grade='A';
    else if (avg>=80)
      grade='B';
    else if (avg>=70)
      grade='C';
    else if (avg>=60)
      grade='D';
    else if (avg>=50)
      grade='E';
    else
      grade='F';
    
    printf("\nHi %s",name);
    printf("\nYour total mark is %.2f",total);
    printf("\nYour average mark is %.2f",avg);
    printf("\nYour rank is %c",grade);
    getch();
    return 0;
    

}
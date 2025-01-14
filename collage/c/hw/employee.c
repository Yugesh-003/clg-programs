 //employee.c
//to accept employee details and make some process
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{
    char name[30];
    int minage,age,bd,bm,by,r,exe,jd,jm,jy;
    struct date dt;
    clrscr();
    getdate(&dt);

    printf("\nEnter your name:");
    scanf("%s",name);
    a:printf("\nEnter you date of birth(DD/MM/YYYY):");
    scanf("%d/%d/%d",&bd,&bm,&by);

    if (by>dt.da_year||bm>12||bd>31)
    {
	printf("\n*Enter valid date of birth*");            //to check validity
	goto a;
    }

    b:printf("\nEnter your date of joining(DD/MM/YYYY):");
    scanf("%d/%d/%d",&jd,&jm,&jy);

    if(jd>31||jm>12||jy>dt.da_year||jy<by)
    {
	printf("\n*Enter valid date*");
	goto b;
    }
    age=dt.da_year-by;
    r=by+58;
    exe=da.dt_year-jy;

    printf("\n\nHi %s",name);
    printf("\nYour age is %d",age);
    printf("\nYou will retair on %d",r);
    printf("\nYour years of exprience is %d",exe);

    getch();

    return 0;

}
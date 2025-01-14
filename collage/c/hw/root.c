#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,dis,rt1,rt2,img,real;

    a:printf("Enter the coefficient of the quatratic equation :");
    scanf("%f %f %f",&a,&b,&c);

    if (a<1){
        printf("ENTER A VALID INPUT\n");
        goto a;
    }

    dis = b*b-4*a*c;
    if (dis < 0)
    {
        real = -b / (2 * a);
        img = sqrt(-dis) / (2 * a);
        printf("Root 1 = %.2f + %.2fi\n",real,img);
        printf("Root 2 = %.2f - %.2fi",real,img);
    }
    else
    {
        rt1=(-b+sqrt(dis))/(2*a);
        rt2=(-b-sqrt(dis))/(2*a);
        printf("Root 1 = %.2f\n",rt1);
        printf("Root 2 = %.2f",rt2);
    }
}
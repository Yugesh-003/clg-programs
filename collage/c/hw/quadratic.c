//242237 - Yugesh A - Program 20 
//to find the root of quadratic equation 
#include<stdio.h>
#include<math.h>
void main()
{
    float real_part,img_part,a,b,c,rt1,rt2,dis;

    printf("Enter the coeff:");
    scanf("%f %f %f",&a,&b,&c);

    dis=b*b-4*a*c;
    if(dis>0)
    {
        rt1=(-b+sqrt(dis))/(2*a);
        rt2=(-b-sqrt(dis))/(2*a);
        printf("Root1=%.2f",rt1);
        printf("Root2=%.2f",rt2); 
    }
    else if (dis<0)
    {
        real_part=-b/(2*a);
        img_part=sqrt(-dis)/(2*a);
        printf("Root 1 = %.2f+%.2fi",real_part,img_part);
        printf("Root 2 = %.2f-%.2fi",real_part,img_part);
    }
}
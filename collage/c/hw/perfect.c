//to find the given number is a perfect number or not
#include<stdio.h>
int isperfect (int no)
{
    int check=0;
    for (int i = 1; i < no; i++)
    {
        if (no % i == 0)
          check += i;
    }
    return check;
}
int main()
{
    int no;
    printf("Enter a number :");
    scanf("%d",&no);
    if (isperfect(no)==no)
      printf("The given number is a perfect number.");
    else
      printf("The given number is not a perfect number.");
    return 0;
}
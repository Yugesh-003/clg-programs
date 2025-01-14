#include <stdio.h>
int main() 
{
    char str[100];
    char ch;
    int count=0;

    printf("Enter a string: ");
    scanf("%s",str);
    printf("Enter a character:");
    scanf(" %c",&ch);
    printf("Position:");
    for(int i=0;str[i]!='\0';i++)
    {
        if (str[i]==ch)
        {
            count++;
            printf("%d ",i+1);
        }
    }
    if(count<1)
     printf("Entered character is not found");
    printf("\nTotal occurrence:%d",count);
    return 0;
}

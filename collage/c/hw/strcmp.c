//to compare two string without using strcmp() function
#include<stdio.h>
int main()
{
    char ch1[40],ch2[40];
    int i=0;
    printf("Enter the first word : ");
    scanf("%s",ch1);
    printf("Enter the second word : ");
    scanf("%s",ch2);

    while (ch1[i]!='\0' && ch2[i]!='\0')
    {
        if (ch1[i]!=ch2[i])
          break;
        i++;
    }
   
    if (ch1[i]==ch2[i])
      printf("Both words are same.");
    else if(ch1[i]>ch2[i])
      printf("The first string is greater.");
    else if (ch1[i]<ch2[i])
      printf("The second string is greater.");

}
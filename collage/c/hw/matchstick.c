#include <stdio.h>

int main()
{
    int total,user,computer,i;
    total=21;
    
    printf("\t**MATCH STICK GAME**\n");
    printf("There are 21 matchsticks.\n");
    printf("You can pick 1, 2, 3, or 4 matchsticks at a time.\n");
    printf("The one forced to pick the last matchstick loses the game.\n");

   while(total>0)
    {
         if (total==1)
        {
            printf("\nYou were forced to pick the last stick.");
            printf("The computer wins the game.");
            break;
        }   
        a:printf("\nYour turn: Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &user);

        if (user<1||user>4) 
        {
            printf("Invalid Choice\n");
            goto a;
        }
        total-=user;
        computer=5-user;
        printf("\nThe computer picked %d",computer);

        total-=computer;
        printf("\nThe total stick count is %d",total);
    }
}
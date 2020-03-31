#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void)
{
    int random,i,j,userip,players,credits;
    int count=0,x;
    	srand(time(0));// Use current time as seed for random generator
    	random=rand()%21;
        //printf(" %d\n ",random);
     // Game Description
        printf("This is a guessing game!!\n I have chosen a number between 0-20 which you must guess\n Lets see you luck!!\n");
        printf("Enter the number of players:",players);
        scanf("%d",&players);
       for (i=1;i<=players;i++)
        {
            printf("\n");
            printf("Player %d:\n",i);
            for(j=5;j>=0;j--)
        {
            printf("You have %d tries left\n",j);
            printf("Enter a guess:",userip);
            scanf("%d",&userip);
            if(userip>random)
            {
                printf("Sorry! %d is wrong. My number is lesser than that\n",userip);
                printf("\n");

            }
            else if (userip==random)
            {
                printf("Congratulations You Have Guessed It Right!!! \n");
                printf("Player %d Wins!!\n",i);
                goto credits;
            }
            else
            {

                printf("Sorry! %d is wrong. My number is greater than that\n",userip);
                printf("\n");
            }
                   }

        }
        credits:
        printf("\n");
        printf("The Chosen Number is = %d\n",random);
        printf("\n");
printf("Created By : Suhruth M V Jamadagni\n            On April 1st 2020");

}

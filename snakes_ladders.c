/*this programe can be used by 2 to play the board game snakes and ladders.
same rules just that there's no board here*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ACHIEVE 100//maximum points needed to win the game

//constants for the dice limits
#define lower_limit 1
#define upper_limit 6

int main()
{
    //using variables to store players' points
    int player1_points=0, player2_points=0;

    //creating the dice USING the srand function that generates random numbers
    srand(time(NULL)); //assigning current time as the seed for the function

    
    

    //using the do-while loop to enable players play
    do
    {
        //declaring a variable to store player whose turn it is to play
        int player;
        printf("Enter your player number i.e. 1 or 2 to roll the dice: ");
        scanf("%d", &player);

        if(player==1)
        {
            //generating random value between 0 and 7 and assigning it to variable dice_value for player 1
            int dice_value1 = lower_limit + rand()%(upper_limit-lower_limit+1);
            
            //cumulating points
            player1_points+=dice_value1;
            
            printf("player 1 rolled a %d and now has %d points\n\n", dice_value1, player1_points);

            //the snakes and the ladders
            //the snakes
            if(player1_points==99)
            {
                player1_points = player1_points-88;
                printf("but you landed on a snake head and got dragged back to 11 points\n");
            }
            else if(player1_points==71)
            {
                player1_points = player1_points-30;
                printf("but you landed on a snake head and got dragged back to 41 points\n");
            }
            else if(player1_points==36)
            {
                player1_points = player1_points-17;
                printf("but you landed on a snake's head and got dragged back to 19 points\n");
            }
            else if(player1_points==70)
            {
                player1_points = player1_points-50;
                printf("but you landed on a snake's head and got dragged back to 20 points\n");
            }
            else if(player1_points==29)
            {
                player1_points = player1_points-24;
                printf("but you landed on a snake's head and got dragged back to 5 points\n");
            }

            //the ladders
            if(player1_points==2)
            {
                player1_points = player1_points+36;
                printf("but you landed at a ladder base and have been pushed to 38 p0ints\n");
            }
            else if(player1_points==64)
            {
                player1_points = player1_points+28;
                printf("but you landed at a ladder base and have been pushed to 92 points\n");
            }
            else if(player1_points==13)
            {
                player1_points = player1_points+26;
                printf("but you landed at a ladder base and have been pushed to 39 points\n");
            }

        }
        else if(player==2)
        {
            //generating random value between 0 and 7 and assigning it to variable dice_value for player 2
            int dice_value2 = lower_limit + rand()%(upper_limit-lower_limit+1);
            
            //cumulating points
            player2_points+=dice_value2;

            printf("player 2 rolled a %d and now has %d points\n\n", dice_value2, player2_points);

            //the snakes and the ladders
            //the snakes
            if(player2_points==99)
            {
                player2_points = player2_points-88;
                printf("but you landed on a snake head and got dragged back to 11 points\n");
            }
            else if(player2_points==71)
            {
                player2_points = player2_points-30;
                printf("but you landed on a snake head and got dragged back to 41 points\n");
            }
            else if(player2_points==36)
            {
                player2_points = player2_points-17;
                printf("but you landed on a snake's head and got dragged back to 19 points\n");
            }
            else if(player2_points==70)
            {
                player2_points = player2_points-50;
                printf("but you landed on a snake's head and got dragged back to 20 points\n");
            }
            else if(player2_points==29)
            {
                player2_points = player2_points-24;
                printf("but you landed on a snake's head and got dragged back to 5 points\n");
            }

            //the ladders
            if(player2_points==2)
            {
                player2_points = player2_points+36;
                printf("but you landed at a ladder base and have been pushed to 38 p0ints\n");
            }
            else if(player2_points==64)
            {
                player2_points = player2_points+28;
                printf("but you landed at a ladder base and have been pushed to 92 points\n");
            }
            else if(player2_points==13)
            {
                player2_points = player2_points+26;
                printf("but you landed at a ladder base and have been pushed to 39 points\n");
            }
            
                printf("\n\n");
        }
        else{printf("enter 1 or 2 to play\n");}
    }
    while(player1_points<ACHIEVE && player2_points<ACHIEVE);
    if(player1_points >=ACHIEVE){printf("Player 1 WINS!!!\n");}
    else if(player2_points>=ACHIEVE){printf("Player 2 WINS!!!\n");}
    

return 0;
}

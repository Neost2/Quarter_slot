///Slot Machine Controller* ///
#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main(void)
{
    // lets intialize the count variables to keep trak of that. if have time might make it its own function
    int counter, counter2;

    // now lets put in that starting miney even though i think be more fun to add in asking for how much you put in might play with
    int cash = 20, quarters = (cash * 4);

    // This is going to be our bet incrament.
    int bet = .25;

    // Now for the variables that will be slot reels. be cool to add images like cherrys amd such but dont lnow if thats possible in C
    int num1;

    // this is varianle for the jack pot win
    int jack_pot;

    // this is the variable for keep playing or not
    int yes_no;

    srand(time(NULL));
    printf("Welcome to the Betting Game!.\n");
    printf("You have $%4d worth of quarters.\n", cash);

    printf("You have %d quarters ($%4d).\n", quarters,  cash);
    printf("\n");
    do
    {


        for (counter2 = 1; counter2 <= 5; counter2++)
        {
            num1 = (rand()%(100 - 1 + 1));

            //Let let them know their ballance
            printf("Current Balance=$%4d", cash);
            printf("	Spin #%2d: ", counter);
            printf("Reel stopped on number:%d ", num1);

            // If statment for a jackpot win
            if ((num1 >=95 ))
            {
                cash -= bet;
                jack_pot = 3 * bet;
                cash += jack_pot;
                printf("Jackpot! You triple your money!\n", jack_pot);
            }

            // If statement for being a loser
            if ((num1 < 50))
            {
                cash -= bet;
                printf("You lose!\n");
            }

            //if statment for if you atleast win something. 
            if (((num1 >= 50) && (num1 <= 75)))
            {
                cash -= bet;
                printf("You get your money back!\n");
                cash += bet;
            }
            if (((num1 >= 75) && (num1 <= 95)))
            {
                cash -= bet;
                printf("You doubled your money!\n");
                cash = 2 * bet;
            }
        }
        // end of for loop still think could be own function and intiallize iput amout of money for starting bet see how much someone dould win

        //find out if they want to make another bet or cash out
        printf("Would you like to spin again or cashout? (Yes=1, No=0)? ");
        scanf("%d", &yes_no);
    } while (toupper(yes_no) == 1);
    printf("Cashing out. You ended with $%4d.", cash);
    return 0;
}
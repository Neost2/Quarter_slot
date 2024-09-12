///Slot Machine Controller* ///
#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main(void)
{
    // lets intialize the count variables to keep trak of that. if have time might make it its own function
    int counter, counter2;

    // now lets put in that starting miney even though i think be more fun to add in asking for how much you put in might play with
    char cash = 20.00;
    int actual_cash = atoi(cash);
    int quarters = (actual_cash * 4);

    // This is going to be our bet incrament.
    char bet = .25;
    int real_bet = atoi(bet);

    // Now for the variables that will be slot reels. be cool to add images like cherrys amd such but dont lnow if thats possible in C
    int num1;

    // this is varianle for the jack pot win
    int jack_pot;

    // this is the variable for keep playing or not
    int yes_no;

    srand(time(NULL));
    printf("Welcome to the Betting Game!.\n");
    printf("You have $%d worth of quarters.\n", cash);

    printf("You have %i quarters ($%4d).\n", quarters,  cash);
    printf("Enter the number of quarters to bet (or 0 to cash out); \n");
    fgets(bet, sizeof(bet), stdin);
    do
    {

        //for (counter2 = 1; counter2 <= 5; counter2++)
        //{
            num1 = (rand()%(100 - 1 + 1));

            //Let let them know their ballance
            printf("Current Balance=$%4d", cash);
            printf("Reel stopped on number:%d ", num1);

            // If statment for a jackpot win
            if ((num1 >=95 ))
            {
                actual_cash -= real_bet;
                jack_pot = 3 * real_bet;
                actual_cash += jack_pot;
                cash = actual_cash;
                printf("Jackpot! You triple your money!\n");
            }

            // If statement for being a loser
            if ((num1 < 50))
            {
                actual_cash -= real_bet;
                printf("You lose!\n");
                cash = actual_cash;
            }

            //if statment for if you atleast win something. 
            if (((num1 >= 50) && (num1 <= 75)))
            {
                actual_cash -= real_bet;
                printf("You get your money back!\n");
                actual_cash += real_bet;
                cash = actual_cash;

            }
            if (((num1 >= 75) && (num1 <= 95)))
            {
                actual_cash -= real_bet;
                printf("You doubled your money!\n");
                actual_cash = 2 * real_bet;
                cash = actual_cash;
            }
       // }
        // end of for loop still think could be own function and intiallize iput amout of money for starting bet see how much someone dould win

        
    } while (yes_no != 0);
    printf("Cashing out. You ended with $%4d.", cash);
    return 0;
}

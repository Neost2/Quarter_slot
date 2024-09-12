///Slot Machine Controller* ///
#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main(void)
{

    // now lets put in that starting money even though I think be more fun to add in asking for how much you put in might play with
    float cash = 20.00;
    //how many quarters you have
    int quarters;

    // This is going to be our bet incrament.
    int bet;
    float real_bet;
    float real_bet1 = .25;
    
    // Now for the variables that will be slot reels. be cool to add images like cherrys amd such but dont lnow if thats possible in C
    int num1;

    // this is varianle for the jack pot win
    float jack_pot;

    // this is the variable for keep playing or not
    int yes_no;

    //welcome them to game
    printf("Welcome to the Betting Game!.\n");
    printf("You have $%.2f worth of quarters.\n", cash);

   // printf("You have %i quarters ($%4f).\n", quarters,  cash);
   // printf("Enter the number of quarters to bet (or 0 to cash out); \n");
   // scanf("%d", &bet);
		bet=1;
    while (bet != 0)
    {
	quarters = cash * 4;
	printf("You have %i quarters ($%.2f).\n", quarters,  cash);
	printf("Enter the number of quarters to bet (or 0 to cash out); \n");
        scanf("%d", &bet);

            num1 = (rand()%(100 - 1 + 1));

            
            real_bet = (bet * real_bet1);

            if (real_bet > cash)
            {
                printf("You don't have enough for that bet. \n");
		

            }else if (num1 >=95 )
            {
                printf("Current Balance=$%.2f \n", cash);
                printf("Reel stopped on number:%i \n ", num1);
                real_bet = (bet * real_bet1);
                jack_pot = (3 * real_bet);
                cash += jack_pot;
                printf("Jackpot! You triple your money!\n");
		
            }
            else if (num1 < 50)
            {
                printf("Current Balance=$%.2f \n", cash);
                printf("Reel stopped on number:%i \n", num1);
                printf("You lose!\n");
		cash = (cash - real_bet);
               
		
		
		

            }else if ((num1 >= 51) && (num1 <= 74))
            {
                printf("Current Balance=$%.2f \n", cash);
                printf("Reel stopped on number:%i \n", num1);
                cash = (cash - real_bet);
                printf("You get your money back!\n");
                cash = (cash + real_bet);
		

            }else if ((num1 >= 75) && (num1 <= 94))
            {
                printf("Current Balance=$%.2f \n", cash);
                printf("Reel stopped on number:%i \n", num1);
                cash = (cash - real_bet);
                printf("You doubled your money!\n");
                cash = (cash + (real_bet * 2));
		
            }

    } 
    printf("Cashing out. You ended with $%.2f. \n", cash);
    return 0;
}

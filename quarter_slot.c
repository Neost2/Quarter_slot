///Slot Machine Controller* ///
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>



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
    printf("Welcome to the Betting Game!\n");
   printf("You have $%.0f worth of quarters.\n\n", cash);

  
		bet=1;
    while (bet != 0)
    {
	quarters = cash * 4;
	printf("You have %i quarters ($%.2f).\n", quarters,  cash);
	printf("Enter the number of quarters to bet (or 0 to cash out): ");
        scanf("%d", &bet);

            num1 = (rand()%(100 - 1 + 1));

            
            real_bet = (bet * real_bet1);
            if (bet == 0)
            {
                printf("Cashing out. You ended with $%.2f.\n", cash);
		return 0;
	    }else if (real_bet > cash)
            {
                printf("Invalid bet. Please enter a valid number of quarters. \n");
	    }else if (num1 >=95 )
            {
	        //printf("You have %i quarters ($%.2f).\n", quarters,  cash);
                printf("Reel stopped on the number: %i \n", num1);
                real_bet = (bet * real_bet1);
                jack_pot = (3 * real_bet);
                cash += jack_pot;
                printf("Jackpot! You triple your money!\n\n");
		
            }
            else if (num1 < 50)
            {
	        //printf("You have %i quarters ($%.2f).\n", quarters,  cash);
                printf("Reel stopped on the number: %i \n", num1);
                printf("You lose!\n\n");
		cash = (cash - real_bet);

            }else if ((num1 >= 51) && (num1 <= 74))
            {
	        //printf("You have %i quarters ($%.2f).\n", quarters,  cash);
                printf("Reel stopped on the number: %i \n", num1);
                cash = (cash - real_bet);
                printf("You get your money back! \n\n");
                cash = (cash + real_bet);
		

            }else if ((num1 >= 75) && (num1 <= 94))
            {
	        //printf("You have %i quarters ($%.2f).\n", quarters,  cash);
                printf("Reel stopped on the number: %i \n", num1);
                cash = (cash - real_bet);
                printf("You doubled your money! \n\n");
                cash = (cash + (real_bet * 2));
		
            }
             if (cash == 0) 
             {
                printf("Game Over\n");
                    return 0;
             }

    } 
//    printf("Cashing out. You ended with $%.2f. \n", cash);
    return 0;
}

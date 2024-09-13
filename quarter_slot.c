///Slot Machine Controller* ///
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define VALID_INPUT    1
#define INVALID_INPUT  0

int main(void)
{

    // now lets put in that starting money even though I think be more fun to add in asking for how much you put in might play with
    float cash = 20.00;
    //how many quarters you have
    int quarters;

    // This is going to be our bet incrament.
    int bet;
    char input[4];
    float real_bet;
    float real_bet1 = .25;
    
    // Now for the variables that will be slot reels. be cool to add images like cherrys amd such but dont lnow if thats possible in C
    int num1;

    // this is varianle for the jack pot win
    float jack_pot;

    // this is the variable for keep playing or not
    int valid_input;

    //welcome them to game
    printf("Welcome to the Betting Game!\n");
   printf("You have $%.0f worth of quarters.\n\n", cash);

  

    while (1)
    {
	quarters = cash * 4;
	printf("You have %i quarters ($%.2f).\n", quarters,  cash);
	printf("Enter the number of quarters to bet (or 0 to cash out): ");
        fgets(input, sizeof(input), stdin);

            num1 = (rand()%(100 - 1 + 1));

            if (input[0] == '0')
            {
                printf("Cashing out. You ended with $%.2f.\n", cash);
                return 0;
            }

            valid_input = VALID_INPUT;
            for (int i = 0, input[i] != '\0'; i++){
                if (input[i] == '\n')
                {
                    input[i] = '\0';
                    break;
                }
                if (!isdigit(input[0]) && input[0] != '-')
                {
                    valid_input = INVALID_INPUT;
                    break;
                }
            }
           
	    
	    if(valid_input)
           {
               sscanf(input,"%d", &bet);
           }
           else
           {
               printf("Invalid bet. Please enter a valid number of quarters. \n");
           }
            
            real_bet = (bet * real_bet1);
            if (real_bet > cash)
            {
                printf("Invalid bet. Please enter a valid number of quarters. \n");
	        }else if (num1 >=95 )
            {
	        
                printf("Reel stopped on the number: %i \n", num1);
                real_bet = (bet * real_bet1);
                jack_pot = (3 * real_bet);
                cash += jack_pot;
                printf("Jackpot! You triple your money!\n\n");
		
            }else if (num1 < 50)
            {
	        
                printf("Reel stopped on the number: %i \n", num1);
                printf("You lose!\n\n");
		cash = (cash - real_bet);

            }else if ((num1 >= 51) && (num1 <= 74))
            {
	        
                printf("Reel stopped on the number: %i \n", num1);
                cash = (cash - real_bet);
                printf("You get your money back! \n\n");
                cash = (cash + real_bet);
		

            }else if ((num1 >= 75) && (num1 <= 94))
            {
	        
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

    return 0;
}

#include <stdio.h>
#include "helpers.h"
#include <stdbool.h>
#include "canada.h"
#include <math.h>
#include <ctype.h>

int modulo_testing();

int integer_division_testing();

int float_cast_to_integer_division_testing();

float for_loop_testing();

float integer_float_addition();

string print_ascii_string_value();

void change_machine();

string rock_paper_scissors();

void vigenere_cipher();

string rock_paper_scissors_choices();

bool is_in_ascii_range(char ltr);

char vigenere_offset_letter(char msgLtr, char keyLtr);

void mario();

int main(int argc, char *argv[])
{

    printf("Choose one of the following options:\n");
    printf("0. Modulo Calculator\n");
    printf("1. Integer Division Calculator\n");
    printf("2. Float & Integer Calculator\n");
    printf("3. For Loop Counter\n");
    printf("4. Integer and Float Addition \n");
    printf("5. Print ASCII values of letters in a string\n");
    printf("6. Print the provinces of Canada\n");
    printf("7. Change Machine\n");
    printf("8. Rock Paper Scissors\n");
    printf("9. Vigenere Cipher\n");
    printf("mario stairs\n");
    int selection = get_int("What is your selection?\n");

    // TODO:: Write a 10 case switch statement to run the appropriate function.
     
     switch(selection){
    
     case 0:
        
        modulo_testing();
     
     break; 
     
     case 1:
     integer_division_testing();
     
     break;
     
     case 2:
      float_cast_to_integer_division_testing();
     
     break;
     
     case 3:
     for_loop_testing();
     
     break;
     
     case 4:
     integer_float_addition();
     break;
     
     case 5:
     print_ascii_string_value();
     break;
     
     case 6:
     print_provinces();
     break;
     
     case 7:
     change_machine();
     break;
     
     case 8:
     rock_paper_scissors();

     break;
     
     case 9:
      vigenere_cipher();

     break;
     
     case 10:
        mario();
     break;
     }

    return 0;
}

int modulo_testing()
{
    int x = get_int("enter an integer\n");
    int y = get_int(" enter a second integer\n");
    int modulo = x % y; 
    // TODO:: Get 2 ints and run the modulo calculation
    // TODO:: Print out the result using the commented out printf

    printf("The remainder of %d divided by %d is %d", x, y, modulo);
    return 1;
}

int integer_division_testing()
{
    int x = get_int(" enetr ann integer\n");
    int y= get_int("entre a second integer\n");
    int result = x/y;
    // TODO:: Get 2 ints and run the division calculation
    // TODO:: Print out the result using the commented out printf

     printf("The result of %d divided by %d is %d", x, y, result);

  //  return result;
}

int float_cast_to_integer_division_testing()
{
float x = get_float(" enter a float value(can have decimals)\n");
float y = get_float(" enter a second float value(can have decimals)\n");
float result = x/y;
int int_result = (int)result;
    // TODO:: Get 2 FLOATS and run the division calculation
    // TODO:: Print out the result using the commented out printf
    // You must use an explicit cast ie: (int)

    printf("The result of %f divided by %f is %f, once cast to an int the result is %d\n", x, y, result, int_result);

    return 1;
}

float for_loop_testing()
{
    float counter = get_float("What should be the initial value of the counter?\n");

    int loop_count = get_int("How many times should the loop run?\n");

    float increment = get_float("How much should the counter increment by?\n");

    bool is_positive = get_char("Should the counter decrement instead of incrementing? y / n \n") == 'n' ? true : false;
     
    if(is_positive == true){
    for( int i = 0 ; i  <loop_count; i++ )
    {
        counter = counter + increment;

          
    }


    }else{
   
    for( int i = 0 ; i < loop_count; i++ )
     {
        counter = counter - increment ;
        printf(" decrement");
     }
    }

    // TODO:: Write a for loop that increments a counter the appropriate amount of times by a custom amount
    // TODO:: Write an if check that will optionally decrement instead of incrementing.

    printf("The final value of the counter is %f\n", counter);

    return counter;
}

float integer_float_addition()
{
    int x = get_int("enetr and integer value\n");
    float y = get_float("please enetr a float value\n");

    float result = (float)x + y; // casting an int to a float
    // Get an int and a float and add them together, make sure the result comes out as a float

    printf("The result of %d plus %f is %f", x, y, result);

    return 1.0;
}

string print_ascii_string_value()
{
     string name = get_string(" please enetr your name");
     int strlng_length = strlen(name);
      int i= 0;
     while(strlng_length > 0){
     
      printf(" %c\n", name[i]);
      printf(" %d\n", name[i]);
      i++;// increments the name array by 1 to increase the letter index
      strlng_length = strlng_length - 1;
      // decrements the string length by 1 to correspond with how many letters are left.
      

     }

    // TODO:: Write a while loop that takes a string that you query the user for then print out each letter with their matching ascii value
    // TODO:: Also print out the characters position in the string
}

void change_machine()
{

    int coins[] = {25, 10, 5};
    int coinCounts[] = {0 ,
                        0,
                        0};

      float x = get_float(" please enter a float value");
      float remainder; 
      int i = 0 ;
      int int_x = (int)x; 
      int cents = x*100 - int_x*100;
      
      for(i; i <3 ; i++)
      { coinCounts[i] = cents / coins[i];
        cents = cents % coins[i];
        
      }
       printf("Quarters:%d, dimes:%d, Nickles:%d", coinCounts[0],coinCounts[1],coinCounts[2] );
      //for(i; i)
    // TODO: Get a float from the user and return the change needed for that amount IE: 2.95
    //       returns 3 quarters and 2 dimes.

    // Optional TODO::The government makes businesses round up the nickels for numbers ending in 3 and 8.
}

string rock_paper_scissors()
{
    int choice = get_int("Choose 1 for rock, 2 for paper, and 3 for scissors:\t");

    string choiceStr =  rock_paper_scissors_choices(choice);

    printf("\n\nYou chose %s\n", choiceStr);
    // TODO:: Query the user for an int between 1 and 3 for their choice of rock, paper scissors.
    //       Use a do while loop to guarantee their input is valid

    string win = "Winner!";
    string lose = "You Lose!";
    string tie = "Tie!";

    int i = 0;

  do{
  
    // Generates a pseudo random int between 0 and 29
    // Use this to determine the "AI" choice
    int random = rand() % 30;

    int AIchoice;

    if(random <= 9) {
        AIchoice = 1;
    } else if(random > 9 && random <= 19) {
        AIchoice = 2;
    } else{
        AIchoice = 3;
    }


    string AIchoiceStr = rock_paper_scissors_choices(AIchoice);

    printf("\nThe computer chose %s\n\n", AIchoiceStr);

    string result;

    switch(AIchoice){

        case 1:

            if(choice == 1){
                result = "Tie!";
            } else if (choice == 2){
                result = "You Lose!";
            } else {
                result = "Winner!";
            }

            break;

        case 2:

            if(choice == 2){
                result = "Tie!";
            } else if (choice == 3){
                result = "You Lose!";
            } else {
                result = "Winner";
            }

            break;

        case 3:

            if(choice == 3){
                result = "Tie!";
            } else if (choice == 1){
                result = "You Lose!";
            } else {
                result = "Winner";
            }

            break;

           
            
    }

     

     i++;

    printf("%s\n\n\n", result);
            //return result;
    // TODO:: Write the game logic with if checks and determine who won


} while(choice > 0 && choice < 4 && i < 1);
}

// Convenience function you can call
string rock_paper_scissors_choices(int choice)
{
    // No need to break out of cases when you return since no code runs after that.
    switch (choice)
    {
    case 1:
        return "rock";

    case 2:
        return "paper";

    case 3:
        return "scissors";

    default:
        break;
    }
}

void vigenere_cipher()
{
    string message = get_string("What is the message to encode? ");

    string key = get_string("What is your encoding key? ");

    // TODO:: Write the for loop for the vigenere cipher
    int messageLen = strlen(message);
    int keyLen = strlen(key);

    //make keyLen = messageLen
    for( int i = 0; i < (messageLen - keyLen); i++)
               {
                  key[ keyLen + i ] = key[i];  
               }

    string encodedMessage;
    
    for(int i = 0; i < messageLen; i++){
        
        encodedMessage[i] = vigenere_offset_letter(message[i], key[i]);

    }

    printf(" Your encoded message is %s", encodedMessage);
}

// Convenice function you can call
char vigenere_offset_letter(char msgLtr, char keyLtr)
{
    // Determine if you need to offset by 97 or 65 to make the choice between 0 for 'a' and 25 for 'z'
    int capital_offset = islower(msgLtr) ? 97 : 65;

    // The key offset doesn't matter because you only offset by the characters value, doesn't matter if its capital
    int key_offset = tolower(keyLtr) - 97;

    // The letters position between 0 and 25
    int ltr_position = msgLtr - capital_offset;

    // Modulo the offset by 26 in case the value is more than 25 and we need to circle back,
    // Re-add the capital offset so the shifted message letter regains it's original cases
    ltr_position = (ltr_position + key_offset) % 26 + capital_offset;

    return (char)ltr_position;
}

// Convenice function you can call
bool is_in_ascii_range(char ltr)
{
    // Only need to check if between 96 and 123 if you tolower the char
    int lowerLtr = tolower(ltr);

    if (lowerLtr > 96 && lowerLtr < 123)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void mario()
{
 int level = get_int("Enter the height of the stairs as an integer value");
 int level_copy = level;
 for(int i= 0; i <= level; i++)
{
// want tto incrase the hashtags each time 

    for(int spaces = level_copy; spaces > 0; spaces --)
    {
        printf(" ");

    }
        for(int blocks = 0; blocks < i; blocks ++ )
    {
        
      printf("#");
      
    }
    level_copy--;
    printf("\n");
}

}
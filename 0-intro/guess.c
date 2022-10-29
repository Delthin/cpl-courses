// progame=input+data+operations+output
/*
1.print the rules of the game to players
2.generate a random number between 1 and high as the secret num
3.ask the player to input a guess
4.obtain the guessed number, compare it with the secret num
5.inform the player of the result
6.**repeat until the player wins or loses
*/
#include <stdio.h>

int main()
{
    int high = 100;
    int num_of_tries = 7;
    printf("Let us play the Guess the Number game.\n"
           "The computer will generate a number between 1 and %d.\n"
           "You have %d tries.\n",
           high, num_of_tries);

    return 0;
}
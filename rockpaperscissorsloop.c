#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


int main() {

    char userinput[25]; //= {"scissors", "rock", "paper"};
    char computerinput[25];
    int score;

    int loop = 0;
    int iterations = 3;



    printf("Rock, paper or scissors! Best of 3!\n");

for (loop = 0; loop < iterations; loop++) {


    printf("\nEnter rock, paper, or scissors: ");
    scanf("%s", userinput);
    strlwr(userinput); 

    

    //safeguard to make sure that the user inputs rock paper or scissors

    while(strcmp(userinput, "paper") != 0 &&  strcmp(userinput, "rock") != 0 && strcmp(userinput, "scissors") != 0){
        
        printf("\nPlease enter only rock, paper, or scissors: \n");
        printf("\nEnter rock, paper, or scissors: ");
        scanf("%s", userinput);
        strlwr(userinput); 

    }

    printf("\nYour choice was: %s", userinput);

    //computers choice of rock, paper, scissors-----------

    srand(time(0)); //RNG ,acts weird sometimes, not true rng
    int number1 = (rand() % 3) + 1;


    if(number1 == 1) //assigns rock paper or scissors from the value of rng
    {
        strcpy(computerinput, "rock");
    }
    else if(number1 == 2)
    {
        strcpy(computerinput, "paper");
    }
    else if(number1 == 3)
    {
        strcpy(computerinput, "scissors");
    }

    printf("\nThe computer's choice: %s\n", computerinput);

    //-----------------------------------------------------
    //an else if ladder to decide who wins based on both of the variables


    if (strcmp(userinput, "rock") == 0){

        if(strcmp(computerinput, "rock") == 0){
            printf("\nDraw!\n");
        }
        else if(strcmp(computerinput, "paper") == 0){
            printf("\nYou lose!\n");
            score--;
        }
        else if(strcmp(computerinput, "scissors") == 0){
            printf("\nYou win!\n");
            score++;
        }
    }
    

    else if(strcmp(userinput, "paper") == 0){

        if(strcmp(computerinput, "rock") == 0){
            printf("\nYou win!\n"); 
            score++;
        }
        else if(strcmp(computerinput, "paper") == 0){
            printf("\nDraw!\n");
        }
        else if(strcmp(computerinput, "scissors") == 0){
            printf("\nYou lose!\n");
            score--;
        }
        
    }

    else if(strcmp(userinput, "scissors") == 0){

        if(strcmp(computerinput, "rock") == 0){
            printf("\nYou lose!\n");
            score--; 
        }
        else if(strcmp(computerinput, "paper") == 0){
            printf("\nYou win!\n");
            score++;
        }
        else if(strcmp(computerinput, "scissors") == 0){
            printf("\nDraw!\n");
        }
    }
    
}
        //final score 
    printf("\nYour final score: %d", score);

    //checks if you have "won" or "lost"
    if(score < 0){
        printf("\nYou lost :(");
    }
    else if(score == 0){
        printf("\nDraw!, if you want to win, play again!");
    }
    else if(score > 0 ){
        printf("\nYou won! kinda");
    }

    return 0;
}
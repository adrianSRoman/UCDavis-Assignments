#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	char userInput = '.';
	int randomRPS = 0; /*This variable refers to Rock, Paper, and Scissors as integers since we use random*/
	
	srand((unsigned)time(NULL)); /*If we write time(0) the computer expects to return a value at the end of the radom number generation, therefore NULL is a way to say to the computer that any number has to be returned*/
	randomRPS = ((rand() % 3) + 1);

	printf("Rock, paper, or scissors? ");
	scanf("%c", &userInput); /*Stores a character in the variable userInput*/

	if(userInput == 'r'){
		if(randomRPS == 1){
			printf("I rolled rock. ");
			printf("We tie!");
		}
		else if(randomRPS == 2){
			printf("I rolled paper. ");
			printf("You lose!");
		}
		else{
			printf("I rolled scissor. ");
			printf("You win!");
		}
	}
	else if(userInput == 'p'){
		if(randomRPS == 1){
			printf("I rolled rock. ");
			printf("You win!");
		}
		else if(randomRPS == 2){
			printf("I rolled paper. ");
			printf("We tie!");
		}
		else{
			printf("I rolled scissor. ");
			printf("You lose!");
		}
	}
	else if(userInput == 's'){
		if(randomRPS == 1){
			printf("I rolled rock. ");
			printf("You lose!");
		}
		else if(randomRPS == 2){
			printf("I rolled paper. ");
			printf("You win! ");
		}
		else{
			printf("I rolled scissor. ");
			printf("We tie!");
		}
	}
	else{
		printf("Error: you did not enter 'r', 'p', or 's'!");
	}

	return 0;


}

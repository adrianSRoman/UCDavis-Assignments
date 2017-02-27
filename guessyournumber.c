#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
	int lowerBound = 1;
	int upperBound = 0;
	int midPoint = 0;
	int numGuess = 0;
	int a = 0;
	char boundType = '.';
	//bool rightGuess = false;
	bool correctType = false;

	printf("Enter n: ");
	a = scanf(" %d", & upperBound);
	if (upperBound < 0){
		printf("Error: n must be a positive.");
		return 0;
	}
	else if(a == 0){
		printf("Error: invalid input.");
		return 0;
	}
	else if(upperBound == 0|| upperBound == lowerBound){
		printf("Your number must be 1. I used 0 guesses.");
		return 0;
	}
	
	numGuess = 1;
	midPoint = (upperBound + lowerBound) / 2.0;
	//rightGuess = false;
	while (true){
		printf("Is your number %d? ", midPoint);
		scanf(" %c", &boundType);
		correctType = (boundType == 'l' || boundType == 's' || boundType == 'e');
		if (correctType == false){
			printf("Error: invalid input.");
			return 0;
		}
		else{
			if(boundType == 'l'){
				if(lowerBound == upperBound){
					printf("Error: that's not possible.");
					return 0;
				}
			lowerBound = midPoint + 1;
			midPoint = (lowerBound + upperBound) / 2.0;
				//if((midPoint - upperBound) == 0){
					//printf("Error: that's not possible.");
					//return 0;
			}
			else if(boundType == 's'){
				if(midPoint == lowerBound){
					printf("Error: that's not possible.");
					return 0;
				}
				upperBound = midPoint - 1;
				midPoint = (lowerBound + upperBound) / 2.0;
			}
			else{
				printf("Your number must be %d. I used %d guesses.", midPoint, numGuess);
				return 0;
			}
		}
		if(upperBound == midPoint && lowerBound == midPoint){
			printf("Your number must be %d. I used %d guesses.", midPoint, numGuess);
			break;
		}
		++numGuess;
	}
	return 0;
}

/* The program search the number by dividing by two the range in which the number can be found */

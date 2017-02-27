#include <stdio.h>
/* This program is an application of the Newton's method of approximation to the square root of any given number */
int main(){
	int number = 0;
	double guess = 0.0;
	int numSteps = 0;
	double squareAprox = 0.0;
	int i = 0;

	printf("Enter the integer you wish to find the square root of: ");
	scanf(" %d", &number);
	printf("Enter your first guess and number of steps: ");
	scanf(" %lf %d", &guess, &numSteps);

	i = 1;
	while (i <= numSteps){
		guess = (guess + number/guess) * (1/2.0);
		squareAprox = guess;
		++i;
	}
	printf("The square root of %d is approximately %0.5lf", number, squareAprox);
	return 0;
}

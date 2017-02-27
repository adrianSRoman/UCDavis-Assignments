#include <stdio.h>

int main(){
	double ribWeight = 0.0;
	int hour = 60;
	double decimalTosecond = 60;
	double firstCookTime = 0.0;
	int continueCookTime = 120;
	double totalCookTime = 0.0;
	int totalhoursNum = 0;
	int totalminutes = 0;
	int totalseconds = 0;

	printf("How many pounds is your prime rib? ");
	scanf("%lf", &ribWeight);

	firstCookTime = ribWeight * 5;
	totalCookTime = firstCookTime + continueCookTime;

	totalhoursNum = totalCookTime/hour;
	totalminutes = totalCookTime - (totalhoursNum * hour);
	totalseconds = (((totalCookTime) - (totalhoursNum * hour + totalminutes)) * decimalTosecond)+0.5; /* add 0.5 in order to round to the least integer greater
                                                                                                    than or equal to the real number n such that n = k + epsilon, where k is an integer.*/

	printf("Your rib will be in the oven for %d hours, %d minutes, and %d seconds.", totalhoursNum, totalminutes, totalseconds);

	return 0;

}

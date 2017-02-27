#include <stdio.h>

int main(){
	double hourlyWage = 0.0;
	int hoursPerWeek = 40;
	int weeksPerYear = 52;
	double annualIncome = 0.0;
	int yearlyDollars = 0;
	double yearlyCents = 0.0;

	printf("What is your hourly wage? ");
	scanf(" %lf", &hourlyWage);
	annualIncome = hourlyWage * hoursPerWeek * weeksPerYear;
	yearlyDollars = annualIncome; /* implicit conversion of annualIncome into an integer automatically */
	yearlyCents = (annualIncome - yearlyDollars)*100.0; /* use 100.0 in order to have the Cents in units, otherwise they would be in terms of decimals */
	printf("Your total income over a year is %d dollars and %0.0lf cents", yearlyDollars, yearlyCents); /* %0.0lf transforms the convert the double into integer, this could also work if since the beginning we created yearlyCents as an integer variable */
	

	return 0;

}

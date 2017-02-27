#include <stdio.h>
int main(){
	int currentGrade = 0;
	double currentGradeWeight = 0.0;
	int finalWorth = 0;
	double finalScoreWeight = 0.0;
	int finalScore = 0;
	int finalGrade = 0;
	double pointsOutOf = 100.0;

	printf("What is your current grade? ");
	scanf("%d", &currentGrade);
	printf("How much is the final worth? ");
	scanf("%d", &finalWorth);
	printf("What is your final exam score? ");
	scanf("%d", &finalScore);

	currentGradeWeight = (currentGrade / pointsOutOf) * (pointsOutOf - finalWorth);
	finalScoreWeight = (finalScore / pointsOutOf) * (finalWorth);
       	finalGrade = (currentGradeWeight + finalScoreWeight) + 0.99;
	printf("Your final grade is %d", finalGrade);
	printf("%%");

	return 0;
}	

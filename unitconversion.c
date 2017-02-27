#include<stdio.h>
#include<stdbool.h>
int main(){
	bool correctChar = true;
	bool correctCharConversion = true;
	char unitVolume = '.';
	char conversionUnit = '.';
	int currentVolume = 0;
	int convertedVolume = 0;
	
	printf("Enter your current measurement and unit of volume: ");
	scanf(" %d %c", &currentVolume, &unitVolume);

	correctChar = (unitVolume == 'q' || unitVolume == 'p' || unitVolume == 'g' || unitVolume == 'c' || unitVolume == 'o');

	if(currentVolume < 0){
		printf("Error! You entered a negative number.\n");
		if(correctChar == false){
			printf("Error! Enter one of 'g' for gallons, 'q' for quarts, 'p' for pints, 'c' for cups, or 'o' for ounces.\n");
			return 0;
		}
		return 0;
	}
	else if(correctChar == false){
		printf("Error! Enter one of 'g' for gallons, 'q' for quarts, 'p' for pints, 'c' for cups, or 'o' for ounces.\n");
		return 0;
	}
	else{
		printf("Enter your desired unit of volume: ");
		scanf(" %c", &conversionUnit);
		correctCharConversion = (conversionUnit == 'g' || conversionUnit == 'q' || conversionUnit == 'p' || conversionUnit == 'c' || conversionUnit == 'o');
		if(correctCharConversion == false){
			printf("Error! Enter one of 'g' for gallons, 'q' for quarts, 'p' for pints, 'c' for cups, or 'o' for ounces.\n");
			return 0;
		}
	}
	
			

	if(unitVolume == 'g' && conversionUnit == 'g'){
		convertedVolume = currentVolume;
		if(convertedVolume > 1){
			printf("You have %d gallons of liquid.", convertedVolume);
		}
		else{
			printf("You have %d gallon of liguid.", convertedVolume);
		}
	}
	else if(unitVolume == 'g' && conversionUnit == 'q'){
		convertedVolume = currentVolume * 4;
		if(convertedVolume > 1){
			printf("You have %d quarts of liquid.", convertedVolume);
		}
		else{
			printf("You have %d quart of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'g' && conversionUnit == 'p'){
		convertedVolume = currentVolume * 8;
		if(convertedVolume > 1){
			printf("You have %d pints of liquid.", convertedVolume);
		}
		else{
			printf("You have %d pint of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'g' && conversionUnit == 'c'){
		convertedVolume = currentVolume * 16;
		if(convertedVolume > 1){
			printf("You have %d cups of liquid.", convertedVolume);
		}
		else{
			printf("You have %d cup of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'g' && conversionUnit == 'o'){
		convertedVolume = currentVolume * 128;
		if(convertedVolume > 1){
			printf("You have %d ounces of liquid.", convertedVolume);
		}
		else{
			printf("You have %d once of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'q' && conversionUnit == 'g'){
		convertedVolume = currentVolume * (1/4.0);
		if(convertedVolume > 1){
			printf("You have %d gallons of liquid.", convertedVolume);
		}
		else{
			printf("You have %d gallon of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'q' && conversionUnit == 'q'){
		convertedVolume = currentVolume;
		if(convertedVolume > 1){
			printf("You have %d quarts of liquid.", convertedVolume);
		}
		else{
			printf("You have %d quart of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'q' && conversionUnit == 'p'){
		convertedVolume = currentVolume * 2;
		if(convertedVolume > 1){
			printf("You have %d pints of liquid.", convertedVolume);
		}
		else{
			printf("You have %d pint of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'q' && conversionUnit == 'c'){
		convertedVolume = currentVolume * 8;
		if(convertedVolume > 1){
			printf("You have %d cups of liquid.", convertedVolume);
		}
		else{
			printf("You have %d cup of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'q' && conversionUnit == 'o'){
		convertedVolume = currentVolume * 64;
		if(convertedVolume > 1){
			printf("You have %d ounces of liquid.", convertedVolume);
		}
		else{
			printf("You have %d ounce of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'p' && conversionUnit == 'g'){
		convertedVolume = currentVolume * (1/8.0);
		if(convertedVolume > 1){
			printf("You have %d gallons of liquid.", convertedVolume);
		}
		else{
			printf("You have %d gallon of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'p' && conversionUnit == 'q'){
		convertedVolume = currentVolume * (1/2.0);
		if(convertedVolume > 1){
			printf("You have %d quarts of liquid.", convertedVolume);
		}
		else{
			printf("You have %d quart of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'p' && conversionUnit == 'p'){
		convertedVolume = currentVolume;
		if(convertedVolume > 1){
			printf("You have %d pints of liquid.", convertedVolume);
		}
		else{
			printf("You have %d pint of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'p' && conversionUnit == 'c'){
		convertedVolume = currentVolume * 2;
		if(convertedVolume > 1){
			printf("You have %d cups of liquid.", convertedVolume);
		}
		else{
			printf("You have %d cup of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'p' && conversionUnit == 'o'){
		convertedVolume = currentVolume * 16;
		if(convertedVolume > 1){
			printf("You have %d ounces of liquid.", convertedVolume);
		}
		else{
			printf("You have %d ounce of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'c' && conversionUnit == 'g'){
		convertedVolume = currentVolume * (1/16.0);
		if(convertedVolume > 1){
			printf("You have %d gallons of liquid.", convertedVolume);
		}
		else{
			printf("You have %d gallon of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'c' && conversionUnit == 'q'){
		convertedVolume = currentVolume * (1/8.0);
		if(convertedVolume > 1){
			printf("You have %d quarts of liquid.", convertedVolume);
		}
		else{
			printf("You have %d quart of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'c' && conversionUnit == 'p'){
		convertedVolume = currentVolume * (1/2.0);
		if(convertedVolume > 1){
			printf("You have %d pints of liquid.", convertedVolume);
		}
		else{
			printf("You have %d pint of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'c' && conversionUnit == 'c'){
		convertedVolume = currentVolume;
		if(convertedVolume > 1){
			printf("You have %d cups of liquid.", convertedVolume);
		}
		else{
			printf("You have %d cup of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'c' && conversionUnit == 'o'){
		convertedVolume = currentVolume * 8;
		if(convertedVolume > 1){
			printf("You have %d ounces of liquid.", convertedVolume);
		}
		else{
			printf("You have %d ounce of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'o' && conversionUnit == 'g'){
		convertedVolume = currentVolume * (1/128.0);
		if(convertedVolume > 1){
			printf("You have %d gallons of liquid.", convertedVolume);
		}
		else{
			printf("You have %d gallon of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'o' && conversionUnit == 'q'){
		convertedVolume = currentVolume * (1/64.0);
		if(convertedVolume > 1){
			printf("You have %d quarts of liquid.", convertedVolume);
		}
		else{
			printf("You have %d quart of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'o' && conversionUnit == 'p'){
		convertedVolume = currentVolume * (1/16.0);
		if(convertedVolume > 1){
			printf("You have %d pints of liquid.", convertedVolume);
		}
		else{
			printf("You have %d pint of liquid.", convertedVolume);
		}
	}
	else if(unitVolume == 'o' && conversionUnit == 'c'){
		convertedVolume = currentVolume * (1/8.0);
		if(convertedVolume > 1){
			printf("You have %d cups of liquid.", convertedVolume);
		}
		else{
			printf("You have %d cup of liquid.", convertedVolume);
		}
	}
	else{
		convertedVolume = currentVolume;
		if(convertedVolume > 1){
			printf("You have %d ounces of liquid.", convertedVolume);
		}
		else{
			printf("You have %d ounce f liquid.", convertedVolume);
		}
	}

	return 0;
}

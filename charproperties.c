#include <stdio.h>
#include <ctype.h>

int main(void){
	char inputChar = '.';
	
	printf("Please enter a character: ");
	scanf("%c", &inputChar);

	if (isupper(inputChar)){
		printf("The char is an uppercase letter.\n");
		if(inputChar == 65){
			printf("The char is a vowel.\n");
		}
		else if(inputChar == 69){
			printf("The char is a vowel.\n");
		}
		else if(inputChar == 73){
			printf("The char is a vowel.\n");
		}
		else if(inputChar == 79){
			printf("The char is a vowel.\n");
		}
		else if(inputChar == 85){
			printf("The char is a vowel.\n");
		}
	}		
	else if(islower(inputChar)){
		printf("The char is a lowercase letter.\n");
		if(inputChar == 97){
			printf("The char is a vowel.\n");
		}
		else if(inputChar == 101){
			printf("The char is a vowel.\n");
		}
		else if(inputChar == 105){
			printf("The char is a vowel.\n");
		}
		else if(inputChar == 111){
			printf("The char is a vowel.\n");
		}
		else if(inputChar == 117){
			printf("The char is a vowel.\n");
		}
	}
	else if(isdigit(inputChar)){
		printf("The char is a digit.\n");
	}
	else if(ispunct(inputChar)){
		printf("The char is punctuation.\n");
		if(inputChar == '\"'){
			printf("The char is a double quote.\n");
		}
	}
	else if(inputChar == '	'){
		printf("The char is a tab.\n");
	}

	return 0;
}


		
	       	      


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void flushStdin();
void noWhiteSpace(char* string, char* result);

int main() {
	int maxStrLen = 0;
	char* str = NULL;
	char* noSpaceStr = NULL;

	printf("Enter a max string lenght: ");
	scanf("%d", &maxStrLen);
	flushStdin();
	
	str = (char*)malloc((maxStrLen + 1) * sizeof(char));
	noSpaceStr = (char*)malloc((maxStrLen + 1) * sizeof(char));
	printf("Enter the string to delete whitespace from: ");
	fgets(str, maxStrLen + 1, stdin);

	/* The following commented code is another way in which the program can be apprached.*/
//	int j = 0;
//	for( int i = 0; str[i] != '\0'; i++) {
//		if (str[i] != ' ') {
//			noSpaceStr[j] = str[i];
//		}
//		else{
//			j = j - 1;
//		}
//		++j;
//	}
//	noSpaceStr[j] = '\0';
//	printf("%s", noSpaceStr);
//	return 0;
//}
	noWhiteSpace(str, noSpaceStr);
	printf("%s", noSpaceStr);
	return 0;
}

/*Recursive function that allows us to delete spaces from a string*/
void noWhiteSpace(char* string, char* result){
	int i = 0;
	int n = 0;
	if (string[i] != ' ' && string[i] != '\0') {
		result[i] = string[n];
		i++;
		n++;
	  	noWhiteSpace(&string[i], &result[n]);
	}
	else if( string[i] == '\0' ) {
		return;
	}
	else{
		i++;
		noWhiteSpace(&string[i], &result[n]);
	}
	return;
}

void flushStdin() {
	char c;
	while ((c = getchar()) != EOF &&
		c != '\n' &&
		c != '\r') {};
}


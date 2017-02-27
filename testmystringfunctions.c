#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// Homework TODO: Include mystringfunctions.h here
#include "mystringfunctions.h"
// Homework TODO: Add function prototypes here
bool getAndRunTest();
void deepCopyStrTestA();
void deepCopyStrTestB();
void deepCopyStrTestC();
void isLowerOrDigitStrTestA();
void isLowerOrDigitStrTestB();
void isLowerOrDigitStrTestC();
void concatStrsTestA();
void concatStrsTestB();
void concatStrsTestC();
void flushStdin();
// Asks user to pick a unit test to run.
// In practice, we write unit tests using a unit testing framework
// and all unit tests are run when the code is compiled.
// For grading purposes, we ask the user to pick the test.
// DO NOT modify this function for your homework.
int main() {
  // User menu
  printf("Which unit test would you like to run?\n");
  printf("1) deepCopyStr\n");
  printf("\ta) n = 2, src = \"test string\"\n");
  printf("\tb) n = 0 returns \"\\0\"\n");
  printf("\tc) negative n returns NULL\n");
  printf("2) isLowerOrDigitStr\n");
  printf("\ta) n = 4, src = \"testString\"\n");
  printf("\tb) n = 5, src = \"testString\"\n");
  printf("\tc) n = 0\n");
  printf("3) concatStrs\n");
  printf("\ta) n = 5, str1 = \"test\", str2 = \"string\"\n");
  printf("\tb) n = 5, str1 = \"\", str2 = \"test string\" returns \"test \"\n");
  printf("\tc) n = 5, str1 = \"test\", str2 = \"\" returns NULL\n");
  while (!getAndRunTest()) {}
}

// Prompt user once for the test to run. 1a is deepCopyStrTestA,
// 1b is deepCopyStrTestB, 2c is isLowerOrDigitStrTestC, and so on.
// If the user input is valid, run the test and return true.
// If the user input is invalid, print the error according to the homework
// prompt and return false.
bool getAndRunTest() {
  // Homework TODO: complete the code for this function.
      int numTest;
      char caseTest;
      bool rightInput = false;
      while(!rightInput) {
	      int testAndCase = scanf("%d %c", &numTest, &caseTest); 
	      flushStdin();
	      if (testAndCase == 0) {
		      printf("Enter 1, 2, or 3 for the function to test.\n");
		      continue;
	      }
	      else if (testAndCase == 1) {
		      printf("Enter 1, 2, or 3 for the function to test.\n");
		      continue;
	      }
	      else {
		      if ((numTest < 1 || numTest > 3) && (caseTest >= 'a' && caseTest <= 'c')) {
			      printf("Enter 1, 2, or 3 for the function to test.\n");
			      continue;
		      }
		      else if ((numTest >= 1 && numTest <= 3) && (caseTest < 'a' || caseTest > 'c')) {
			      printf("Enter a, b, or c for the test case.\n");
			      continue;
		      }
		      else {
			      if (numTest == 1) {
				      switch (caseTest) {
					      case 'a':
						      deepCopyStrTestA();
						      break;
					      case 'b':
						      deepCopyStrTestB();
						      break;
					      case 'c':
						      deepCopyStrTestC();
						      break;
				      }
			      }
			      else if (numTest == 2) {
				      switch (caseTest) {
					      case 'a':
						      isLowerOrDigitStrTestA();
						      break;
					      case 'b':
						      isLowerOrDigitStrTestB();
						      break;
				              case 'c':
						      isLowerOrDigitStrTestC();
						      break;
				      }
			      }
			      else {
				      switch (caseTest) {
					      case 'a':
						      concatStrsTestA();
						      break;
					      case 'b':
						      concatStrsTestB();
						      break;
				              case 'c':
						      concatStrsTestC();
						      break;
				      }
			      }
		      }
	      rightInput = true;
              continue;
	      }
      }
      return true;
}

				     


// Test n = 2 and src = "test string" returns "te"
void deepCopyStrTestA() {
      char* result = deepCopyStr("test string", 2);
      // if (result) checks to see something is returned (even if the string is empty).
      //   We will see later in the course this is checking if the result is a NULL pointer
      assert(result && result[0] == 't' && result[1] == 'e' && result[2] == '\0');
      printf("Test successful.\n");
}   

// Test n = 0 the returns "\0"
void deepCopyStrTestB() {
      char* result = deepCopyStr("test string", 0);
      assert(result && result[0] == '\0');
      printf("Test successful.\n");
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
}

// Test negative n returns NULL
void deepCopyStrTestC() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
      char* result = deepCopyStr("test string", -1);
      assert(result == '\0');
      printf("Test successful.");
}

// Test n = 4, src = "testString" returns true
void isLowerOrDigitStrTestA() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
    bool result = isLowerOrDigitStr("testString", 4);
    assert(result == true);
    printf("Test successful.");
}

// Test n = 5, src = "testString" returns false
void isLowerOrDigitStrTestB() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
    bool result = isLowerOrDigitStr("testString", 5);
    assert(result == false);
    printf("Test successful.");
}

// Test n = 0, src = "" returns true
void isLowerOrDigitStrTestC() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
    bool result = isLowerOrDigitStr("", 0);
    assert(result == true);
    printf("Test successful.");
}

// Test n = 10, str1 = "test", str2 = "string" returns "teststring"
void concatStrsTestA() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
    char* result = concatStrs("test", "string", 10);
    assert(result && result[0] == 't' && result[1] == 'e' && result[2] == 's' && result[3] == 't' && result[4] == 's' && result[5] == 't' && result[6] == 'r' && result[7] == 'i' && result[8] == 'n' && result[9] == 'g' && result[10] == '\0');
    printf("Test successful.");
}

// n = 5, str1 = "", str2 = "test string" returns "test "
void concatStrsTestB() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
    char* result = concatStrs("", "test string", 5);
    assert(result && result[0] == 't' && result[1] == 'e' && result[2] == 's' && result[3] == 't' && result[4] == ' ' && result[5] == '\0');
    printf("Test successful.");
}

// n = 5, str1 = "test", str2 = "" returns NULL
void concatStrsTestC() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
    char* result = concatStrs("test", "", 5);
    assert(result == '\0');
    printf("Test successful.");
}

// Flush stdin buffer
void flushStdin() {
    // Homework TODO: see 1/30/17 lecture notes to understand what this
    // function will do and how it should be written.
    char n;
    while (( n = getchar()) != EOF &&
		    n != '\n' &&
		    n != '\r') {};
}

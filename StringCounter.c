//DATE: 2023.09.10
//PURPOSE: Counts the characters in a string and returns the number

#include <stdio.h>
#include <string.h> // For strlen function

// Function prototypes

int stringCounter(char textToCount[]);

int main() {
	int result = 0;
	char myString[] = "This is to be counted";
	result = stringCounter(myString);
	printf("Length of the srting is: %i", result);
	

	// The same but with built in function

	int builtInResult = 0;
	builtInResult = strlen(myString);
	printf("\nLength of the same string with strlen is: %i", builtInResult);
	
		


	return 0;
}

int stringCounter(char textToCount[]) {
	int count = 0;
	while (textToCount[count] != '\0') {
		count++;
	}
	return count;
}


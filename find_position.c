// When provided with a letter, return its position in the alphabet.
// Input :: "a"
// Output :: "Position of alphabet: 1"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* position(char letter); 

int main(void)
{
	char letter;
	printf("Enter a lowercase letter: ");
	scanf("%c", &letter);

	printf("%s\n", position(letter));
	//position(letter);

	return 0;
}

char* position(char letter)
{
	char* sentence = (char*)malloc(25 * sizeof(char));
	if(sentence == NULL)
	{
		printf("Error allocating memory for sentence\n");
		exit(1);
	}

	sprintf(sentence, "Position of alphabet: ");

	char* let = (char*)malloc(5 * sizeof(char));
	if(let == NULL)
	{
		printf("Error allocating memory for let\n");
		exit(1);
	}
	
	letter -= 96;
	sprintf(let, "%d", letter);

	strcat(sentence, let);

	return sentence;
	
}


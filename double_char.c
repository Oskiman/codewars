// Given a string, you have to return a string in which 
// each character (case-sensitive) is repeated once.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* double_char(const char* string, char* doubled);

int main(void)
{
	char* doubled;
	char* input = "abCd";
	printf("%s\n", double_char(input, doubled));

	return 0;
}

char* double_char(const char* string, char* doubled)
{
	*doubled = '\0';

	int i = 0;
	int j = 0;
	while(string[i] != '\0')
	{
		doubled[j++] = string[i];
		doubled[j++] = string[i++];
	}

	doubled[j] = '\0';

	return doubled;
}

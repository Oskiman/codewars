// Write a function to convert a name into initials. 
// This kata strictly takes two words with one space in between them.
// The output should be two capital letters with a dot separating them.
// "Joe Bloggs" -> "J.B."
// "joe bloggs" -> "J.B."

#include <ctype.h>
#include <stdio.h>

char *get_initials (const char *full_name, char initials[4]);

int main(void)
{
	char* name1 = "Joe Bloggs";
	char* name2 = "joe bloggs";
	char initials[4];
	printf("%s\n", get_initials(name1, initials));
	printf("%s\n", get_initials(name2, initials));

	return 0;
}

char *get_initials (const char *full_name, char initials[4])
{
	initials[0] = toupper(*full_name);
	initials[1] = '.';
	while(*full_name != ' ')
	{
		full_name++;
	}

	full_name++;	// hopefully at start of second name
	initials[2] = toupper(*full_name);
	initials[3] = '\0';

  	return initials; // return it
}

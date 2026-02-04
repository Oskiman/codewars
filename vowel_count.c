//Return the number (count) of vowels in the given string.
//We will consider a, e, i, o, u as vowels for this Kata (but not y).
//The input string will only consist of lower case letters and/or spaces.

#include <stdio.h>
#include <stddef.h>

size_t get_count(const char *s);

int main(void)
{
	char* test_string = "a bcei opq u";
	printf("%ld\n", get_count(test_string));

	return 0;
}


size_t get_count(const char *s)
{
	size_t count = 0;
	while(*s != '\0')
	{
		if(*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
			count++;

		s++;
	}

    	return count;
}


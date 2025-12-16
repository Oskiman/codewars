// Idea from Codewars
// Given a non-negative integer, 3 for example, 
// return a string with a murmur: 
// "1 sheep...2 sheep...3 sheep...". 
// Input will always be valid, i.e. no negative integers.

char *count_sheep(unsigned n);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	printf("%s\n", count_sheep(5));
	printf("%s\n", count_sheep(0));

	return 0;
}

char *count_sheep(unsigned n)
{
  char* murmur_string = calloc(n, sizeof(char[12]));
  char murmur_buffer[20];
  for(int i = 1; i <= n; ++i)
    {
      snprintf(murmur_buffer, 20, "%d sheep...", i);
      strcat(murmur_string, murmur_buffer);
  }
  
  return murmur_string;
  free (murmur_string);
}

#include <stdlib.h>
#include <string.h>

char *are_you_playing_banjo(const char *name) {
  char *return_string = calloc(strlen(name) + 21, sizeof(char));
  for(int i = 0; i < strlen(name); i++)
    return_string[i] = name[i];
	if(name[0] == 'R' || name[0] == 'r')
    strcat(return_string, " plays banjo");
  else
    strcat(return_string, " does not play banjo");
  
  return return_string;
  //return calloc(1, 1); // memory will be freed

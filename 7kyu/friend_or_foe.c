#include <string.h>

void filter_friends (const char *names[])
{
  int read = 0, write = 0;
  
  while(names[read] != '\0')
    {
    if(strlen(names[read]) == 4)
      names[write++] = names[read];
    
    read++;
  }
  
  names[write] = '\0';
}

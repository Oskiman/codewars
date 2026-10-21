#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//solution must allocate all required memory
//and return a free-able buffer to the caller.

char *disemvowel(const char *str)
{ 
  char *buffer = malloc(strlen(str) + 1);
  char *c = buffer;
    while(*str)
      {
        switch(*str){
          case 'a':
          case 'A':
          case 'e':
          case 'E':
          case 'i':
          case 'I':
          case 'o':
          case 'O':
          case 'u':
          case 'U':
                  break;
          default:
                  *c++ = *str;
          }
      
      *str++;
    }
  
  *c = '\0';
    
	return buffer;
}

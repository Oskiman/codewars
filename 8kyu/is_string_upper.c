#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_uppercase(const char *source) {
  int length = strlen(source);
  for(int i = 0; i < length; i++)
    {
        if(isalpha(source[i]) && !isupper(source[i])) 
            return false;
  }
    return true;
}

#include <stddef.h>

size_t str_count(const char *str, char letter) {
    size_t count = 0;
    while(*str)
    {
      if (*str == letter)
      {
        count++;
      }
      str++;
    }
  return count;
}

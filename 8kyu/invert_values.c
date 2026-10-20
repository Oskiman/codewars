#include <stddef.h>

void invert(int array[/* length */], size_t length)
{
    // mutate the array in-place
  for (int i = 0; i < length; i++) {
    array[i] = array[i]*(-1);
  }
}

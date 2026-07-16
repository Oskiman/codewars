#include <stdbool.h>
#include <math.h>

bool is_even(double n)
{ 
  if (fmod(n, 1.0) != 0.0) {
        return false;
    }
    
    int num = (int)n;
    return num % 2 == 0;
}

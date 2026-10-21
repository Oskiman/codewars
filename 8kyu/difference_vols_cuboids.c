// You must find the difference of the cuboids' volumes regardless of which is bigger.

#include <stdlib.h>

int find_difference(const int a[3], const int b[3]) {

  int prod_a = a[0], prod_b = b[0];
    for(int i = 1; i < 3; i++)
    {
      prod_a *= a[i];
      prod_b *= b[i];
    }
  
  return abs(prod_a - prod_b);
}

// to do it one line, unroll the loop (i had help on this btw)
// int find_difference(const int a[3], const int b[3]) {
    //return abs(a[0]*a[1]*a[2] - b[0]*b[1]*b[2]);  

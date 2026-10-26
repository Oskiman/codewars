#include <inttypes.h>

uint64_t descendingOrder(uint64_t n)
{
  int count = 0;
  int digits[20];   // to accomodate uint64_t
  
  while(n > 0)  // get digits
    {
      digits[count++] = n % 10;
      n /= 10;
  }
  
  // bubble sort
  for(int i = 0; i < count - 1; i++)
    {
    for(int j = 0; j < count - 1 - i; j++)
      {
        if(digits[j] < digits[j + 1])
        {
          int temp = digits[j];
          digits[j] = digits[j + 1];
          digits[j + 1] = temp;
        }
      }
  }
  
  uint64_t result = 0;
  for(int i = 0; i < count; i++)
    {
      result = result * 10 + digits[i];
  }
  
  
  return result;
}`


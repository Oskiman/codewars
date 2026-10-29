char *binary_add (unsigned a, unsigned b, char *binary)
{
// write to the binary string and return it
  char* original = binary;
  unsigned long long sum = (unsigned long long)a + b;
  do  {
    *binary++ = '0' + (sum % 2);
    sum /= 2;
  } while(sum > 0);
	*binary = '\0';
  
  // reverse in place
  char* low = original;
  char* high = binary - 1;
  while(low < high)
    {
    char temp = *low;
    *low++ = *high;
    *high-- = temp;
  }
  
	return original;
}

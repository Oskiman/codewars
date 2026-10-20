// Create a function with two arguments that will return 
// an array of the first n multiples of x.
//Assume both the given number and the number of times 
//to count will be positive numbers greater than 0. 


void count_by(unsigned x, unsigned n, unsigned result[n]) {
  for (unsigned int i = 0; i < n;i++)
    {
    result[i] = x * (i+1);
    }
}

// Complete the findNextSquare method that finds the next integral perfect square 
// after the one passed as a parameter. 
// Recall that an integral perfect square is an integer n such that sqrt(n) is also an integer.
// If the argument is itself not a perfect square then return either -1 or an empty value like 
// None or null, depending on your language. You may assume the argument is non-negative.
// 121 --> 144
// 625 --> 676
// 114 --> -1  #  because 114 is not a perfect square

#include <stdio.h>
#include <math.h>

long int findNextSquare(long int sq);

int main(void)
{
	printf("%ld\n", findNextSquare(14));

	printf("%ld\n", findNextSquare(121));

	return 0;
}

long int findNextSquare(long int sq)
{
	long int root = sqrt(sq);
	int test = (root * root == sq); // returns 1 if perfect square, otherwise 0 
	if(test == 0)
	{
		return -1;
	}
	else
	{
		// return next perfect square, for 121 (11 * 11), it will be 144 (12 * 12)
  		return (root + 1) * (root + 1);
	}
}

//             1
//          3     5
//       7     9    11
//   13    15    17    19
//21    23    25    27    29
//...
//
//Calculate the sum of the numbers in the nth row of this triangle (starting at index 1) e.g.: (Input --> Output)
//
//1 -->  1
//2 --> 3 + 5 = 8
//
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint64_t rowSumOddNumbers(uint32_t n);

int main(void)
{
	uint32_t row = 0;
	printf("Enter row number: ");
	scanf("%d", &row);

	printf("%ld\n", rowSumOddNumbers(row));
	return 0;
}

uint64_t rowSumOddNumbers(uint32_t n)
{
	// cast to uint64_t else we overflow
	return (uint64_t)n * n * n;
}

//Your task is to make a function that can take any non-negative integer 
//as an argument and return it with its digits in descending order. 
//Essentially, rearrange the digits to create the highest possible number.
//Examples:
//Input: 42145 Output: 54421
//Input: 145263 Output: 654321
//Input: 123456789 Output: 987654321

//NOTE: This fails one test on codewars which I may attempt to fix, or not!

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <inttypes.h>

uint64_t descendingOrder(uint64_t n);
uint64_t bubble_sort_rev(uint64_t array[], int array_length);
void swap(uint64_t* x, uint64_t* y);

int main(void)
{
	int ex1 = 42145;
	int ex2 = 145263;
	int ex3 = 123456789;

	printf("%ld\n", descendingOrder(ex1));	
	printf("%ld\n", descendingOrder(ex2));
	printf("%ld\n", descendingOrder(ex3));

	return 0;
}


uint64_t descendingOrder(uint64_t n)
{
	int copy = n;
	int length = 0;
	while(copy != 0)
	{
		copy /= 10;
		++length;
	}

	uint64_t* arr_ptr = (uint64_t*)malloc(length * sizeof(uint64_t));
	if(arr_ptr == NULL)
	{
		printf("Memory allocation failed!\n");
		exit(1);
	}

	// get individual digits & add to array
	int count = 0;
	uint64_t digit;
	do {
  		digit = n%10;
  		arr_ptr[count] = digit;
		count++;
	}while (n/=10);


  return bubble_sort_rev(arr_ptr, length);
}

// 'reverse' bubble sort from high to low
uint64_t bubble_sort_rev(uint64_t array[], int array_length)
{
	bool swapped = false;		// if array is fully sorted, we can end early
	int i = 0;
	do{
		swapped = false;	// set to false for every pass
		for(int j = 0; j < (array_length - i - 1); j++) // after each pass, highest value will be in correct place
		{						// with -i we reduce the length of the search by 1 each pass
			if(array[j] < array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;		// we have swapped 2 numbers this pass
			}
		}
	i++;
	}while(swapped); // continue as long as we swap numbers each pass

	// convert array back to uint64_t
	uint64_t sorted_int = 0;
	for (i = 0; i < array_length; i++)
	{
    		sorted_int = 10 * sorted_int + array[i];
	}

	return sorted_int;
}

void swap(uint64_t* x, uint64_t* y)
{
	uint64_t temp = *x;
	*x = *y;
	*y = temp;
}


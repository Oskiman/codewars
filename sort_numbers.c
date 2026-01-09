// Finish the solution so that it sorts the passed in array of numbers. 
// If the function passes in an empty array or null/nil value then it should return an empty array.
// For example:
// int array[5] = {1, 2, 10, 50, 5};
// sort_ascending(5, array); // array is now {1, 2, 5, 10, 50}
// sort_ascending(0, NULL); // nothing to do for empty array

#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

int* sort_ascending(size_t length, int array[]);
void swap(int*x, int *y);
void print_array(size_t length, int array[]);
int main(void)
{
	int array[5] = {1, 2, 10, 50, 5};
	sort_ascending(5, array);	
	print_array(5, array);

	return 0;
}


int* sort_ascending (size_t length, int array[])
{
	if(length == 0)
	{
		return array;
	}
  // sort the array given in parameter in place
	bool swapped = false;		// if array is fully sorted, we can end early
	int i = 0;
	do{
		swapped = false;	// set to false for every pass
		for(int j = 0; j < (length - i - 1); j++) // after each pass, highest value will be in correct place
		{						// with -i we reduce the length of the search by 1 each pass
			if(array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;		// we have swapped 2 numbers this pass
			}
		}
	i++;
	}while(swapped); // continue as long as we swap numbers each pass	
}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void print_array(size_t length, int array[])
{
	for(size_t i = 0; i < length; i++)
		printf("%d ", array[i]);

	printf("\n");
}


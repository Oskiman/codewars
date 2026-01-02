//We need a function that can transform a number (integer) into a string.
//In C, return a dynamically allocated string that will be freed by the test suite.
//Examples (input --> output):
//
//123  --> "123"
//999  --> "999"
//-100 --> "-100"
//
#include <stdio.h>
#include <stdlib.h>

char *number_to_string(int number);

int main(void)
{
	int num = 0;
	printf("Enter an integer: ");
	scanf("%d", &num);

	printf("%s\n", number_to_string(num));

	return 0;
}

char *number_to_string(int number) {

    //  return a dynamically allocated C-string,
    //  which will be freed by the tests suite
	int count = 0;
	int copy = number;
	while(copy > 0)		// get length of input
	{
		copy /= 10;
		count++;
	}
	count++;	// extra for '\0'
	char* to_string = calloc(count, sizeof(char));

	sprintf(to_string, "%d", number);

    return to_string;
}

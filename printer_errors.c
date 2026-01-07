//In a factory a printer prints labels for boxes. 
//For one kind of boxes the printer has to use colors which, 
//for the sake of simplicity, are named with letters from a to m.
//The colors used by the printer are recorded in a control string. 
//For example a "good" control string would be aaabbbbhaijjjm 
//meaning that the printer used three times color a, four times color b, one time color h then one time color a...
//Sometimes there are problems: lack of colors, technical malfunction and a "bad" control string is produced 
//e.g. aaaxbbbbyyhwawiwjjjwwm with letters not from a to m.
//You have to write a function printer_error which given a string 
//will return the error rate of the printer as a string representing a rational 
//whose numerator is the number of errors and the denominator the length of the control string. 
//Don't reduce this fraction to a simpler expression.
//The string has a length greater or equal to one and contains only letters from ato z.
//Examples:
//
//s="aaabbbbhaijjjm"
//printer_error(s) => "0/14"
//
//s="aaaxbbbbyyhwawiwjjjwwm"
//printer_error(s) => "8/22"
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *printerError(const char *s);

int main(void)
{
	char* test1 = "aaabbbbhaijjjm";			// errors 0/14
	char* test2 = "aaaxbbbbyyhwawiwjjjwwm";		// errors 8/22
	
	printf("%s\n", printerError(test1));
	printf("%s\n", printerError(test2));
 

	return 0;
}

char *printerError(const char *s) 
{
    // get length of input string
    int count = 0;
    int error_count = 0;
    while(*s != '\0')
    {
	// error check here?
	if(*s < 'a' || *s > 'm')
	{
		error_count++;
	}
	s++;	// move to next char in string
	count++;
    }

    // calloc space for new string, str1 + str2 + "/" + '\0'
    char* output = (char*)calloc(40, sizeof(char));
    if(output == NULL)
    {
     		printf("Memory allocation failed.\n");
     		exit(1);
    }
    // calloc for str1 & str2 ?
    char* str1 = (char*)calloc(10, sizeof(char));
    if(str1 == NULL)
    {
     		printf("Memory allocation failed.\n");
     		exit(1);
    }
    
    char* str2 = (char*)calloc(10, sizeof(char));
    if(str2 == NULL)
    {
     		printf("Memory allocation failed.\n");
     		exit(1);
    }

    sprintf(str1, "%d", count);
    sprintf(str2, "%d", error_count);
    strcat(output, str2);
    strcat(output, "/");
    strcat(output, str1); 

    return output;
}

// The below is a solution from codewars
// a bit more succinct than mine!
//char* printerError(char *s) {
//	
//  int c = 0;
//  int len = strlen(s);
//  char *r;
//  
//  while(*s){
//  	if (*s < 'a' || *s > 'm') c++;
//    s++;
//  }
//  
//  asprintf(&r, "%d/%d", c, len);
//  
//  return r;
//}

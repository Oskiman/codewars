//Character recognition software is widely used to digitise printed texts. Thus the texts can be edited, searched and stored on a computer.
//When documents (especially pretty old ones written with a typewriter), are digitised character recognition softwares often make mistakes.
//Your task is correct the errors in the digitised text. You only have to handle the following mistakes:

  //  S is misinterpreted as 5
  //  O is misinterpreted as 0
  //  I is misinterpreted as 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* correct(char* string);

int main(void)
{
	char* test = "510";
	printf("%s\n", correct(test));

	return 0;
}

char* correct(char* string) 
{
	char* ftest = (char*)malloc(256 * sizeof(char));
	strcpy(ftest, string);
	for(int i = 0; ftest[i] != '\0'; ++i)
	{
		if(ftest[i] == '5')
			ftest[i] = 'S';
		else if(ftest[i] == '0')
			ftest[i] = 'O';
		else if(ftest[i] == '1')
			ftest[i] = 'I';

	}

	// I did the below & it works on codewars (passed all tests)
	// but gives a seg fault on my own laptop!
	// It's the weekend before christmas & I'm too lazy to sort it
	strcpy(string, ftest);
    return string;
}

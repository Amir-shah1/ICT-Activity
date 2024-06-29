// downward triangle of ABC
#include <stdio.h>
int main()
{
	int i, j, num;
	num = 5;
	int abc = num;
	int value = 65;
	for(i = 1; i <= num; i++)
	{
		for(j = 1; j <= abc; j++)
		{
			printf("%c", value);
		}
		value++;
		abc--;
		printf("\n");
	}	
	printf("\nName = Amir Ali Shah.\n");
	printf("Registration No = SP24-BCS-018\n");
	return 0;
}
/*Requirements
 Print a pattern of characters.
Specifications
 The pattern should start with a single character "A" and continue 
with rows with an increasing number of characters (up to 5).
 Each character in a row should be the same and follow the 
alphabetical order (A, B, C, D, E).
Explanation of Important Terms
 Loops:
o Outer loop (for(i = 1; i <= 5; i++)): This loop 
controls the number of rows. It iterates 5 times, once for 
each row in the pattern.
o Inner loop (for(j = 1; j <= i; j++)): This loop controls 
the number of characters printed in each row. It iterates up 
to i times in each iteration of the outer loop, printing the 
corresponding character*/
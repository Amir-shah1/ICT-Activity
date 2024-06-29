// printing shapes
#include <stdio.h>
int main()
{
	int i, j, k;
	printf("+----+\n");
	for(i = 1; i <= 5; i++)
	{
		if(i % 2 == 1)
		{
			printf("\\ /\n");
		}else
		{
			printf("/ \\\n");
		}
	}
	printf("+----+");
	return 0;
}
/*Requirements
 The program should print a pattern of shapes.
Specifications
 The pattern should consist of alternating rows of forward slashes 
("/") and backslashes ("") enclosed within plus signs ("+").
 There should be a total of 6 rows, including the top and bottom rows 
with plus signs.
Explanation of Important Terms
 Inia..i = 1 sets the counter variable i to 1 before the loop starts.
 condition: i <= 5 checks if i is less than or equal to 5. The loop 
continues as long as this condition is true.
 increment: i++ increments i by 1 after each iteration of the loop.
This loop iterates 5 times, controlling the number of rows printed 
between the top and bottom rows with plus signs.
 Conditional statements: The if-else statement checks if the 
current iteration (i) is odd (i % 2 == 1).
o If i is odd, the code prints a row with forward slashes ("/ ").
o If i is even, the code prints a row with backslashes ("\ /")*/
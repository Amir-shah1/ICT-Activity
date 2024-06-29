// Using for loop with two counter i and j
#include <stdio.h>
int main()
{
	int i, j;
	for(i = 1, j = 5; i <= 4 && j >= 2; i++, j--)
	{
		if(i == 3)
		{
			printf("\nName = Amir Ali Shah.\n");
			printf("Registration No = SP24-BCS-018\n\n");
		}
		printf("(%d, %d)\n", i, j);
	}
	return 0;
}
/*Requirements
 The program should print a sequence of coordinate pairs.
Specifications
 The program should use two loops (one for loop) with counters i
and j.
 The coordinates should be printed as (i, j) on separate lines.
 Student information (name and registration number) should be 
inserted between specific coordinate pairs.
Explanation of Important Terms
 initialization: i = 1, j = 5 sets the counter variables i
and j to their initial values before the loop starts.
 condition: i <= 4 && j >= 2 checks if i is less than or equal 
to 4 AND j is greater than or equal to 2. The loop continues as long 
as both conditions are true.
 increment/decrement: i++, j-- increments i by 1 and 
decrements j by 1 after each iteration of the loop.
This loop iterates as long as both i and j are within the specified 
range, printing each coordinate pair on a separate line.
*/
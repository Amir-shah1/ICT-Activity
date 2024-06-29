// using nested loop
#include <stdio.h>
int main()
{
	int i, j;
	for(i = 0; i <= 2; i++)
	{
		printf("Statemnet fo the outer loop.\n");
		for(j = 0; j <= 4; j++)
		{
			if(i == 1 && j == 2)
			{
				printf("\nName = Amir Ali Shah.\n");
				printf("Registration No = SP24-BCS-018\n\n");
			}
			printf("%d %d ", i, j);
			printf("Statement of the inner of loop.\n");
		}
	}
	return 0;
}
/*Requirements
 The program should demonstrate nested loops.
Specifications
 The code should use two nested loops to create a grid-like output.
 Student information (name and registration number) should be 
printed at a specific location within the grid.
Explanation of Important Terms
 Nested Loops: The code uses two for loops, one inside the other. 
The outer loop controls the number of times the inner loop 
executes. In this case, the outer loop runs 3 times, and for each 
iteration, the inner loop runs 5 times.
 Conditional Statement: The code uses an if statement to check a 
specific condition (i == 1 && j == 2) and only print student 
information when that condition is true.*/
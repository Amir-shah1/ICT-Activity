// using nested while loop to print (1-10) 10 times 
#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if(i == 6)
		{
		printf("\nName = Amir Ali Shah.\n");
		printf("Registration No = SP24-BCS-018\n\n");
		}
		printf("%d....", i);
		int j = 1;
		while (j <= 10)
		{
			printf("%d", j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
	
}
/*Requirements
 The program should print the numbers from 1 to 10, 10 times.
Specifications
 Each set of numbers from 1 to 10 should be printed on a separate 
line.
 The student information (name and registration number) should be 
inserted before the sixth set of numbers.
 "..." should be appended after each number in the inner loop.
Explanation of Important Terms
o Loops: Outer loop (while loop):
 The while loop iterates as long as the condition i 
<= 10 is true. In this case, it runs 10 times (once for 
each set of numbers 1 to 10).
o Inner loop (while loop):
 The inner while loop nested within the outer loop 
iterates as long as the condition j <= 10 is true. It 
prints the numbers 1 to 10 within each iteration of 
the outer loop*/
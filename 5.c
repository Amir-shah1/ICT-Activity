// nested while loop
#include <stdio.h>
int main()
{
	int i = 1;
	while(i <= 2)
	{
		printf("%d Outer loop execute.\n", i);
		int j = 1;
		while(j <= 3)
		{
			printf("	%d Inner loop execute.\n", j);
			j++;
		}
		i++;
	}
	printf("\nName = Amir Ali Shah.\n");
	printf("Registration No = SP24-BCS-018\n\n");
	return 0;
}
/*Requirements
 The program should demonstrate the execution of nested loops.
Specifications
 The code should use two nested while loops.
 The outer loop should iterate twice.
 The inner loop should iterate three times within each outer loop 
iteration.
Explanation of Important Terms
 Loops: The code utilizes two nested while loops.
o Outer loop: The outer while loop iterates as long as i is less 
than or equal to 2. It controls the overall execution of the 
loop structure.
o Inner loop: The inner while loop iterates as long as j is less 
than or equal to 3. It runs three times within each iteration 
of the outer loop.*/

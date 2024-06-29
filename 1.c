// print 1-10 suing for loop
#include <stdio.h>
int main()
{
	int i;
	for( i = 1; i <= 10; i++)
	{
		if(i == 5)
		{
			printf("\nName = Amir Ali Shah.\n");
			printf("Registration No = SP24-BCS-018\n\n");
		}
		printf("%d\n", i);
	}
	return 0;
}
/*Requirements
 Print the numbers from 1 to 10.
Specifications
 The numbers should be printed on separate lines.
 Student information (name and registration number) should be 
inserted between numbers 4 and 5.
Explanation of Important Terms
 initialization: i = 1 sets the counter variable i to 1 before 
the loop starts.
 condition: i <= 10 checks if i is less than or equal to 10. The loop 
continues as long as this condition is true.
 increment: i++ increments i by 1 after each iteration of the loop.
This loop iterates 10 times, printing each number from 1 to 10 on a 
separate line.*/
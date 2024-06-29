// Write a C program to find the sum of first 10 natural numbers.
#include <stdio.h>
int main()
{
	int i, sum;
	for ( i = 1; i <= 10; i++)
	{
		printf("%d ", i);
		sum = sum + i;
	}
	printf("\nSum of integer (1-10) is = %d.\n", sum);
	printf("\nName = Amir Ali Shah.\n");
	printf("Registration No = SP24-BCS-018\n");
	return 0;
}
/*Requirements
 The program should calculate the sum of the first 10 natural 
numbers.
Specifications
 Natural numbers are positive integers starting from 1 (1, 2, 3, ...).
 The program should print the individual numbers being added for 
clarity.
 The final sum should be displayed along with a clear message.
 Student information (name and registration number) should be 
printed after the calculation.
Explanation of Important Terms
 initialization: i = 1 sets the counter variable i to 1 before 
the loop starts.
 condition: i <= 10 checks if i is less than or equal to 10. The loop 
continues as long as this condition is true.
 increment: i++ increments i by 1 after each iteration of the loop.
This loop iterates 10 times, adding each number from 1 to 10 to the sum
variable.
*/
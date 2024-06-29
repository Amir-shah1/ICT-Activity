// printing table of 5
#include <stdio.h>
int main()
{
	int i, j = 5, multi;
	for(i = 1; i <= 10; i++)
	{
		multi = i * j;
		printf("%d x %d = %d\n", i, j, multi);	
	}
	
	printf("\nName = Amir Ali Shah.\n");
	printf("Registration No = SP24-BCS-018\n");
	return 0;
	
}
/*Requirements
 The program should print a multiplication table for a specific 
number.
Specifications
 The table should be for the number 5.
 It should display the multiplication of 5 with numbers from 1 to 10.
 Student information (name and registration number) should be 
printed after the table.
Explanation of Important Terms
 initialization: i = 1 sets the counter variable i to 1 before 
the loop starts.
 condition: i <= 10 checks if i is less than or equal to 10. The loop 
continues as long as this condition is true.
 increment: i++ increments i by 1 after each iteration of the loop.
This loop iterates 10 times, calculating and printing the multiplication 
of 5 with each number from 1 to 10*/
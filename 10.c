// printing ABC in order
#include <stdio.h>
int main()
{
	int i, j, k;
	for(i = 1; i <= 5; i++)
	{
		int value = 65;
		for(j = 1; j <= i; j++)
		{
			printf("%c", value);
			value++;
		}
		printf("\n");
	}
	printf("\nName = Amir Ali Shah.\n");
	printf("Registration No = SP24-BCS-018\n");
	return 0;
}
/*Requirements
 The program should print a pattern of characters.
Specifications
 The pattern should start with a single character "A" and continue 
with rows with increasing number of characters (up to 5).
 Each character in a row should follow the alphabetical order (A, B, C, 
..., up to E).
Explanation of Important Terms
 Loops: The code uses two nested loops:
o Outer loop: for(i = 1; i <= 5; i++) iterates 5 times, 
controlling the number of rows.
o Inner loop: for(j = 1; j <= i; j++) iterates up to i
times in each outer loop iteration, controlling the number of 
characters printed in each row*/
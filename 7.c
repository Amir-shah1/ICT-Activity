// printing triangle with *
#include <stdio.h>
int main()
{
	int i, j, input;
	printf("Enter hight: ");
	scanf("%d", &input);
	for (i = 1; i <= input; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\nName = Amir Ali Shah.\n");
	printf("Registration No = SP24-BCS-018.\n");
	return 0;
	
}
/*Requirements
 The program should prompt the user to enter a height value.
 Based on the entered height, the program should print a right-angled 
triangle using asterisks (*).
Specifications
 The user input should be an integer greater than or equal to 1.
 The number of asterisks printed in each row should increase by 1
from 1 until it reaches the entered height.
 Each row should end with a newline character, resulting in the 
triangle shape.
Explanation of Important Terms
 Outer loop (for(i = 1; i <= input; i++)): This loop controls the number 
of rows in the triangle. It iterates from 1 to the entered height 
(input).
 Inner loop (for(j = 1; j <= i; j++)): This loop controls the number of 
asterisks printed in each row. It iterates from 1 to the current row 
number (i)*/
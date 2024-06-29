// printing triangle in center
#include <stdio.h>
int main()
{
	int i, j, k, height, b = 1;
	printf("Enter hight: ");
	scanf("%d", &height);
	int space = height;
	for(i = 1; i <= height; i++)
	{
		// printing left side spaces
		for (k = 1; k < space; k++)
		{
			printf(" ");
		}
		space--;
		// printing (*)
		for(j = 1; j <= b; j++)
		{
			printf("*");
		}
		printf("\n");
		b = b + 2;
	}
	printf("\nName = Amir Ali Shah.\n");
	printf("Registration No = SP24-BCS-018\n");
	return 0;
}
/*Requirements
 The program should prompt the user to enter a height value.
 Based on the entered height, it should print a right-angled triangle 
pattern of asterisks centered on the screen.
Specifications
 The triangle should be printed with the asterisk (*) as building block.
 Each row of the triangle should have one more asterisk than the 
previous row, starting with a single asterisk at the top.
 Asterisks should be left-aligned within the triangle, with spaces filling 
the remaining area to center the triangle on the screen.
Explanation of Important Terms
 The outer loop (for(i = 1; i <= height; i++)) iterates 
height times, controlling the number of rows.
 The inner loop for spaces (for (k = 1; k < space; k++)) prints 
spaces before the asterisks in each row. It stops before reaching 
space to leave room for asterisks.
 The inner loop for asterisks (for(j = 1; j <= b; j++)) prints 
the asterisks in each row. The variable b controls the number of 
asterisks and is incremented by 2 in each iteration.
*/
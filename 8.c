// pirnting inverted triangle
#include <stdio.h>
int main()
{
	int i, j, input;
	printf("Enter hight: ");
	scanf("%d", &input);
	int line = input;
	for(i = 1; i <= input; i++)
	{
		for(j = 1; j <= line; j++)
		{
			printf("*");
		}
		printf("\n");
		line--;
	}
	printf("\nName = Amir Ali Shah.\n");
	printf("Registration No = SP24-BCS-018\n");
	return 0;
}
/*Requirements
 The program should print an inverted triangle of asterisks.
Specifications
 The user should be prompted to enter the height of the triangle.
 The number of asterisks printed in each row should decrease from 
the height of the triangle down to 1.
 Each row of asterisks should be printed on a separate line.
 Student information (name and registration number) should be 
printed below the triangle.
Specifications
 The user should be prompted to enter the height of the triangle.
 The number of asterisks printed in each row should decrease from 
the height of the triangle down to 1.
 Each row of asterisks should be printed on a separate line.
 Student information (name and registration number) should be 
printed below the triangle.
*/
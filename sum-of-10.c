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

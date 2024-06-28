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

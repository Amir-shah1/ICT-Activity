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

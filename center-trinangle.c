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

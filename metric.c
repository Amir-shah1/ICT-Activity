#include <stdio.h>
int main()
{
	int i, j, k, height, space, b = 1;
	printf("Enter height: ");
	scanf("%d", &height);
	space = height;
	
	for(i = 1; i <= height; i++)
	{
		// printing spacese
		for(j = 1; j <= i; j++)
		{
			printf(" ");
			if()
		}
		
		// printng star *
		for(k = 1; k <= space; k++)
		{
			printf("*");
		}
		space = space - 2;
		printf("\n");
	}
	return 0;
}

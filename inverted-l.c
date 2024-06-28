#include <stdio.h>
int main()
{
	int i, j, k, hight;
	printf("Enter hight: ");
	scanf("%d", hight);
	int space = hight;
	for (i = 1; i <= hight; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf(" ");
		}
		i++;
		for(k = 1; k <= space; k++)
		{
			printf("*");
		}
		space--;
		k = k + 2;
	}
	return 0;
}

// printing A BB CCC---
#include <stdio.h>
int main()
{
	int i, j, num;
	num = 65;
	for(i = 1; i <= 5; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%c", num);
		}
		num++;
		printf("\n");
	}
	printf("\nName = Amir Ali Shah.\n");
	printf("Registration No = SP24-BCS-018\n");
	return 0;
}

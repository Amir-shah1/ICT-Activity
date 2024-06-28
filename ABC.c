// printing ABC in order
#include <stdio.h>
int main()
{
	int i, j, k;
	for(i = 1; i <= 5; i++)
	{
		int value = 65;
		for(j = 1; j <= i; j++)
		{
			printf("%c", value);
			value++;
		}
		printf("\n");
	}
	printf("\nName = Amir Ali Shah.\n");
	printf("Registration No = SP24-BCS-018\n");
	return 0;
}

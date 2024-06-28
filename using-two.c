// Using for loop with two counter i and j
#include <stdio.h>
int main()
{
	int i, j;
	for(i = 1, j = 5; i <= 4 && j >= 2; i++, j--)
	{
		if(i == 3)
		{
			printf("\nName = Amir Ali Shah.\n");
			printf("Registration No = SP24-BCS-018\n\n");
		}
		printf("(%d, %d)\n", i, j);
	}
	return 0;
}

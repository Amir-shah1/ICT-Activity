// using nested loop
#include <stdio.h>
int main()
{
	int i, j;
	for(i = 0; i <= 2; i++)
	{
		printf("Statemnet fo the outer loop.\n");
		for(j = 0; j <= 4; j++)
		{
			if(i == 1 && j == 2)
			{
				printf("\nName = Amir Ali Shah.\n");
				printf("Registration No = SP24-BCS-018\n\n");
			}
			printf("%d %d ", i, j);
			printf("Statement of the inner of loop.\n");
		}
	}
	return 0;
}

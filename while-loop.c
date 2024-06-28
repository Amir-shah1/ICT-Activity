// nested while loop
#include <stdio.h>
int main()
{
	int i = 1;
	while(i <= 2)
	{
		printf("%d Outer loop execute.\n", i);
		int j = 1;
		while(j <= 3)
		{
			printf("	%d Inner loop execute.\n", j);
			j++;
		}
		i++;
	}
	printf("\nName = Amir Ali Shah.\n");
	printf("Registration No = SP24-BCS-018\n\n");
	return 0;
}


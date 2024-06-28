// print 1-10 suing for loop
#include <stdio.h>
int main()
{
	int i;
	for( i = 1; i <= 10; i++)
	{
		if(i == 5)
		{
			printf("\nName = Amir Ali Shah.\n");
			printf("Registration No = SP24-BCS-018\n\n");
		}
		printf("%d\n", i);
	}
	return 0;
}

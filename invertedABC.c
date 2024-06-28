// downward triangle of ABC
#include <stdio.h>
int main()
{
	int i, j, num;
	num = 5;
	int abc = num;
	int value = 65;
	for(i = 1; i <= num; i++)
	{
		for(j = 1; j <= abc; j++)
		{
			printf("%c", value);
		}
		value++;
		abc--;
		printf("\n");
	}	
	printf("\nName = Amir Ali Shah.\n");
	printf("Registration No = SP24-BCS-018\n");
	return 0;
}

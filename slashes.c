// printing shapes
#include <stdio.h>
int main()
{
	int i, j, k;
	printf("+----+\n");
	for(i = 1; i <= 5; i++)
	{
		if(i % 2 == 1)
		{
			printf("\\ /\n");
		}else
		{
			printf("/ \\\n");
		}
	}
	printf("+----+");
	return 0;
}

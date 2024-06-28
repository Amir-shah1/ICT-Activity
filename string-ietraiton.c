// itreating over string
#include <stdio.h>
int main()
{
	int i, j, k;
	char name[] = "Amir Shah";
	for(i = 0; name[i]; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%c", name[j]);
		}
			printf("\n");
	}
	printf("\nName = Amir Ali Shah.\n");
	printf("Registration No = SP24-BCS-018\n");
	return 0;
}

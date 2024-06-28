// using nested while loop to print (1-10) 10 times 
#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if(i == 6)
		{
		printf("\nName = Amir Ali Shah.\n");
		printf("Registration No = SP24-BCS-018\n\n");
		}
		printf("%d....", i);
		int j = 1;
		while (j <= 10)
		{
			printf("%d", j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
	
}

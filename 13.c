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
/*Requirements
 The program should iterate over a given string.
Specifications
 The program should print the characters of the string in a triangular 
pattern, with each row containing one more character than the 
previous row, until all characters are printed.
 Student information (name and registration number) should be 
printed after the pattern.
Explanation of Important Terms
 Outer loop (for(i = 0; name[i]; i++)): This loop iterates over 
the characters in the string name. It continues as long as the 
character at the current index i is not the null terminator (\0). The 
null terminator marks the end of the string in C-style strings.
 Inner loop (for(j = 0; j <= i; j++)): This loop controls the 
number of characters printed in each row. It iterates from 0 to i
(current outer loop index), printing each character from the 
beginning of the string (name[0]) up to the current index i. This 
creates the triangular pattern*/
// using do while loop
#include <stdio.h>
int main()
{
	int i = 0;
	do
	{
		printf("Amir Shah\n");
		i++;
	}
	while(i <= 3);
	printf("\nName = Amir Ali Shah.\n");
	printf("Registration No = SP24-BCS-018\n");
	
}
/*Requirements
 The program should print a specific message ("Amir Shah").
Specifications
 The message "Amir Shah" should be printed a certain number of 
times.
 Student information (name and registration number) should be 
printed after the message has finished printing.
Explanation of Important Terms
 Loops: The code uses a do-while loop. This type of loop 
guarantees that the code within the loop executes at least once. 
In this code:
o The do block prints "Amir Shah".
o The while condition checks if i is less than or equal to 3.
o The loop repeats as long as i is less than or equal to 3, 
printing "Amir Shah" four times in total*/
//doctors office
//1. add a patient
//2. view a patient
//3. search patient
//4. exit
#include <stdio.h>

int main()
{
	printf("Choose a menu option 1-4:\n");
	printf("1. add a patient\n");
	printf("2. view a patient\n");
	printf("3. search patients\n");
	printf("4. exit\n");

	int input;
	scanf("%d", &input);

	if (input == 1)
	{	
	    printf("1. add a patient\n");
	} else if (input == 2)
	{
	    printf("2. view a patient\n");
	} else if (input == 3)
	{
	    printf("3. search patients\n");
	} else if (input == 4)
	{
		printf("Exiting...\n");
		printf("Do you want to save? Y/N: ");
		char q;

		getchar();
		scanf("%c", &q);
		
	   	if(q == 'Y' || q == 'y')
		{
			printf("Saving changes!\n");
		} else if(q == 'N' || q == 'n')
		{
			printf("Fine whatever\n");
		} else
		{
			printf("Haxing detected self destructing in 5...4...3...2..1...BOOM\n");
		}
	} else
	{
	    printf("Incorrect input");
	}

	return 0;
}

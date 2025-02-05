//The user has to guess a number from 0 - 5.
//output wheter or not the person is corect

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//suedo random number generator
	//this gets seeded
	//outputs a result
	//seed - from the clock
	
	int maxValue = 50;
	srand(time(NULL));
	int randomNumber = rand() % maxValue + 1;
	
	printf("%d\n", randomNumber);
	
	printf("Guess a number 0 - %d\n", maxValue);
	int input;
	scanf("%d", &input);

	if(input == randomNumber)
	{
		printf("You win!");
		return 0;
	}else
	{
		printf("You lost!");
		return 0;
	}

	printf("Thank you for playing!\n");
	return 0;
}

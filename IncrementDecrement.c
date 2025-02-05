#include <stdio.h>

int main()
{
	int pizzasToEat = 100;

	int output = pizzasToEat--;

	printf("output: %i\n", output);
	printf("Pizzas to eat: %i\n", pizzasToEat);
	
	return 0;
}

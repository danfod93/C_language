#include <stdio.h>

int main()
{
	printf("The number of eggs of the day: ");

	int eggs;

	scanf("%i" , &eggs); // address-of operator

	double dozen = (double) eggs / 12;

	printf("You have %f dozen eggs.\n", dozen);

	return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <math.h>


bool isPrime(int input)
{

	int i;

	for (i = sqrt(input); i > 1; i--)
	{
		if(input % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	//get input from user
	//print all primes from that number down to zero (down to 2)
	
	int input;
	scanf("%d", &input);

	int i;
	for(i = input; i > 1; i--)
	{
		bool prime = isPrime(i);	
		if (prime)
		{	
			printf("%d Is Prime!\n", i);
		}
	}
	
	return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
	double a;
	double b;
	
	printf("This app will calculate the hypotenuse of a right triangle. \n");
	
	//Get the first number
	printf("Now enter the first value: ");
	scanf("%lf", &a);
	//Get the second number
	printf("Now enter the second value: ");
	scanf("%lf", &b);
	
	//calculate the hypotenuse
	double c = sqrt((a*a) + (b*b));

	printf("The hypotenuse: %f\n", c);

	return 0;
}

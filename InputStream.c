#include <stdio.h>
#include <stdlib.h>

//When we use multiple scanf() and we want to input a char, we need to flush the data.
int main()
{
	int d;
	char a;

	printf("Please input your age: ");
	scanf("%d", &d);
	printf("Your age is: %d\n", d);
	printf("Please input your age: ");

	getchar(); //getchar() - Grabs the character \n.
	scanf("%c", &a);
	printf("Your age is: %d\n", a);
	return 0;
}

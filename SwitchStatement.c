#include <stdio.h>

int main()
{
	printf("How many pizza slices you eat (tell the truth): ");
	int slices;
	scanf("%d", &slices);
	int caloriesPerSlice = 250;

	switch(slices)
	{
		case 1:
		case 2:
		case 3:
			printf("You did a good job!");
			break;
		case 4:
			printf("You're a dissapontment");
			break;
		default:
			printf("Enjoy your heart disease");
			break;
	}

	printf("You had %d calories.\n", caloriesPerSlice * slices);

	return 0;
}

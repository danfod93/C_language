#include <stdio.h>

int main()
{
	int i;
	for(i; i < 11; i++)
	{
		//printf("%d\n", i);
		int k;
		for (k = i; k >= 0; k-- )
		{
			printf("%d ", k );
		}
	printf("\n");
	}
	return 0;
}

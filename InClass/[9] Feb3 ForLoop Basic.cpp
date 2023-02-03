#include <stdio.h>
int main(void)
{
	int i, j;
	printf(" i j\n\n");
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			printf(" %d %d \n", i, j);
		}
	}
	return(0);
}

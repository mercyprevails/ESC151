#include <stdio.h>
int main()
{
	int i, j, k;
	printf("  i    j    k  \n\n");
	for (i = 1; i <= 2; i++)
	{
		for (j = 1; j <= 2; j++)
		{
			for (k = 1; k <= 2; k++)
			{
				printf("  %i    %i    %i \n", k, i, j);
			}
		}

	}
	return(0);
}
